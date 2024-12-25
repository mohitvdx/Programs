// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector < int > a(m);
        vector < int > b(k);
        int sum1 = (n * (n + 1)) / 2;
        int sum2 = 0;

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < k; i++) {
            cin >> b[i];
            sum2 += b[i];
        }

        if (n == k) {
            for (int i = 0; i < m; i++) {
                cout << 1;
            }
            cout << '\n';
            continue;
        } else if (n - k >= 2) {
            for (int i = 0; i < m; i++) {
                cout << 0;
            }
            cout << '\n';
            continue;
        }

        int cantsolve = sum1 - sum2;

        for (int i = 0; i <m; i++) {
            if (cantsolve == a[i]) {
                cout << 1;
            } else {
                cout << 0;
            }

        }
        ///.....
        cout << '\n';

    }
}