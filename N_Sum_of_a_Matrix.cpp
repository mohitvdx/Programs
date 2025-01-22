// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void rec(int i, int j, int r, int c, vector<vector<int>>& sum, vector<vector<int>>& a, vector<vector<int>>& b){
    if(i>=r || j>=c){
        return;
    }
    if(sum[i][j]!=0){
        return;
    }
    sum[i][j] = a[i][j] + b[i][j];
    rec(i+1, j, r, c, sum, a, b);
    rec(i, j+1, r, c, sum, a, b);
}

void solve(){
    int r, c; cin>>r>>c;

    vector<vector<int>> a(r, vector<int> (c));
    vector<vector<int>> b(r, vector<int> (c));
    vector<vector<int>> sum(r, vector<int> (c,0));


for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>a[i][j];
    }
}

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>b[i][j];
    }
}

    rec(0,0,r,c, sum, a, b);

    for(auto k:sum){
        for(auto l: k){
            cout<<l<<" ";
        }
        cout<<'\n';
    }
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