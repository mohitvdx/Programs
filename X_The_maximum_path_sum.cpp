// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void rec(vector<vector<int>> & a, int &maxi,int sum, int i, int j, int n, int m){
    if(i>n-1 || j>m-1){
        return;
    }
    sum+=a[i][j];

    if(i==n-1 && j==m-1){
            if(sum>maxi) maxi = sum;
        }

    rec(a, maxi, sum, i+1, j, n, m);
    rec(a, maxi, sum, i, j+1, n, m);
}

void solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n,vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int maxi  = INT_MIN;
    rec(a, maxi, 0, 0, 0, n, m);
    cout<<maxi;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

*/