// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/F

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
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector < int > vec(n + 1);
    for (int i = 0; i < q; i++) {  // making the difference array 
        int l, r, t;
        cin >> l >> r >> t;
        vec[l - 1] = vec[l - 1] + t;
        vec[r] = vec[r] - t;
    }
    vector < int > pre(n);
    pre[0] = vec[0];
    for (int i = 1; i < n; i++) {   // taking the prefix sum of the difference array
        pre[i] = pre[i - 1] + vec[i];
    }
    for (int i = 0; i < n; i++) {
        cout << pre[i] + a[i] << " ";   //adding the difference array with original array 
    }
    // }
}