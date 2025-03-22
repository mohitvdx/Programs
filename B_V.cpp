// Mohit Verma "mohitvdx"
// problem: Implement the given logic

#include <bits/stdc++.h>
#include <algorithm> 

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto& x : a) cin >> x;

    vector<int> re(n + 1, 0); // Initialize with 0
    for (int x : a) {
        // if (x <= n) { // Ensure the value is within the bounds of re
            re[x] = 1;
        // }
    }

    vector<int> ans;
    for (int i = 1, j = 1; i <= n; i = ++j) {
        while (j <= n && re[j]) {
            j++;
        }
        for (int k = j; k >= i; k--) {
            ans.push_back(k);
        }
    }



    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " "; 
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
    solve();
    // }
}

/*

*/