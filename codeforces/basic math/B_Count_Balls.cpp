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
        int n,a,b;
        cin>>n>>a>>b;

        if(n%(a+b)==0){
            cout<<(n/(a+b))*a<<'\n';
        }else{
            int ans = (n/(a+b))*a;
            int extra = n%(a+b);
            if(extra>=a){
                 ans = ans + a;
            }else{
                 ans = ans + extra;
            }
           
            cout<<ans<<'\n';
        }
    // }
}