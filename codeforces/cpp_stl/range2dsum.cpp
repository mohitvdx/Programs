// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/G

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        vector<vector<int> > mat(n+1,vector<int>(m+1));

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>mat[i][j];
            }
        }

        //precompute the prefix sum of the 2d matrix 
        vector<vector<int> > pre(n+1,vector<int>(m+1));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                pre[i][j]=mat[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
            }
        }


        for(int i =0; i<q; i++){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            int x = pre[x2][y2] - pre[x2][y1-1]-pre[x1-1][y2]+pre[x1-1][y1-1];
            cout<<x<<'\n';
        }
    // }
}