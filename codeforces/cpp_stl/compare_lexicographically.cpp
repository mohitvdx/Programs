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
        string s1,s2;
        cin>>s1>>s2;
        string ans;
        if(s1<s2){
            ans = s1;
        }else{
            ans =s2;
        }
        cout<<ans<<'\n';
    // }
}