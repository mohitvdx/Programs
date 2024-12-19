// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

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

    vector < vector < int >> vec(n, vector < int > (m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    int x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vec[i][j] == x) {
                cout << "will not take number";
                return 0;
            }
        }
    }

    cout << "will take number";
    return 0;


    // }
}