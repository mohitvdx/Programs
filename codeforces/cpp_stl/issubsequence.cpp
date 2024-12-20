// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n, m;
    cin >> n >> m;

    vector < int > a(n);
    vector < int > b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0;
    int k;

    for (k = 0; k < m;) {
        if (i >= n) {
            break;
        }
        if (b[k] == a[i]) {
            i++;
            k++;
        } else {
            i++;
        }
    }

    if (k == m) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    // }
}