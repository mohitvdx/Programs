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
        int n; cin>>n;
        int k; cin>>k;

        vector<int> ans;

        int x=2;
        while(ans.size()<k-1 && n>0 && x<n){
            if(n%x==0){
                ans.push_back(x);
                n=n/x;
            }else{
                x++;
            }
        }

        if(ans.size()==k-1){
            for(auto m: ans){
                cout<<m<<" ";
            }
             cout<<n;
        }else{
            cout<<-1<<'\n';
        }
    // }
}