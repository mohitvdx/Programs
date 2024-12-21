// submitted by Mohit Verma "mohitvdx"
// problem: https://cses.fi/problemset/task/1641/

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
        int n,t;
        cin>>n>>t;
        vector<int> a(n);
        
        for(int i=0; i<n;i++){
            cin>>a[i];
        }

        map<int,int> mpp;

        for(int i=0; i<n-1; i++){
            for(int j=1; j<n; j++){
                int remaining = t-(a[i]+a[j]);
                if(mpp.find(remaining)!=mpp.end()){
                    cout<<i+1<<" "<<mpp[remaining]+1<<" "<<j+1<<'\n';
                    return 0;
                }
                mpp[a[j]]=j;
            }
        }

        cout<<"IMPOSSIBLE"<<'\n';

        
    // }
}