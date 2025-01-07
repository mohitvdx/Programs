// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> vec(n,vector<int>(n-1));
        vector<int> appearances(101);
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin>>vec[i][j];
            }
            appearances[vec[i][0]]++;
        }

        for(int i=0; i<101; i++){
            if(appearances[i]==n-1){
                ans[0]=i;
                break;
                }
        }

        for(int i=0; i<n; i++){
            if(vec[i][0]!=ans[0]){
                for(int j=0; j<n-1; j++){
                    ans[j+1]=vec[i][j];
                }
                break;
            }
        }

        for(auto k: ans){
            cout<<k<<" ";
        }
        cout<<'\n';
    }
}
 
/*
 
*/