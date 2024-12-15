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
        int n,q;
        cin>>n>>q;
        unordered_map<int,int> umap;
        while(q--){
            int z,x;
            cin>>z>>x;
            if(z==1){
                umap[x]++;
            }else if(z==2){
                cout<<umap[x]<<'\n';
            }
        }
    // }
}