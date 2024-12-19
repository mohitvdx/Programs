// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

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
    int n, q;
    cin >> n >> q;
    vector < int > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    //making the prefix sum array 
    vector < int > pre(n + 1);
    pre[0] = 0;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + vec[i-1];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        cout << pre[r] - pre[l - 1] << '\n';
    }
    // }
}