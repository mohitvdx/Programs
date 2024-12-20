// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q

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
        int n;
        cin >> n;

        vector < int > a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            count++;
            for (int j = i; j < n - 1; j++) {

                if (a[j + 1] >= a[j]) {
                    count++;
                } else {
                    break;
                }
            }
        }

        cout << count << '\n';
    }
}