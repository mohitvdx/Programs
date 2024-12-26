// submitted by Mohit Verma "mohitvdx"
// problem: 

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
        string s;
        cin>>s;
        int n = s.size();

        int m;
        cin>>m;

        //precompute;
        vector<int> pre(n);
        pre[0]=0;

        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                pre[i]=pre[i-1]+1;
            }else{
                  pre[i]=pre[i-1];
            }
        }

        for(int i=0; i<m; i++){
            int l,r;
            cin>>l>>r;

            cout<<pre[r-1] - pre[l-1]<<'\n';


        }
    // }
}