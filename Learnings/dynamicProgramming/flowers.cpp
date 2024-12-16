// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/problemset/problem/474/D

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
// unordered_map<int,int> umap;  //TLE 
int dp[100001];
int k;


int solve(int n) {  // TC= O(N) after dynamic programming 

    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = (solve(n - 1) + solve(n - k))%MOD;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;

    cin >> k;
    memset(dp, -1, sizeof(dp));
    int pre[100001];
    pre[0] = solve(0);
    for(int i =1; i<100001; i++){
        pre[i]=(pre[i-1] + solve(i))%MOD;
    }
   
    while (t--) {
        int a, b;
        cin >> a >> b;
        // int sum = 0;
        // for (int i = a; i <= b; i++) {  //now since the test cases loop and this loop => the time complexity is still O(N^2)
        //     sum += solve(i);
        // }
        cout << ((pre[b]%MOD-pre[a-1]%MOD)+MOD)%MOD << '\n';
    }
}

// 3 2
// 1 3
// 2 3
// 4 4
