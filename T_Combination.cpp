// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int rec(int n, int r, vector<vector<int>>& dp){
    if (r == 0 || r == n){
        return 1;
    }
    if(r>n){
        return 0;
    }
    if(dp[n][r]!=-1) return dp[n][r];

    return dp[n][r] = rec(n - 1, r - 1, dp) + rec(n - 1, r, dp);
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int n, r;
    cin >> n >> r;

    vector<vector<int>> dp(n+1, vector<int> (r+1, -1));

    cout << rec(n, r,dp);
    // }
}

/*
this is giving time limit exceeded, so now using dp in this 
dp will be a 2d array, to get the memoized value from the n,r

---> forgot to add the condition for when r>n return 0;
*/