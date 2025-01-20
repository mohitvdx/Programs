// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s; cin>>s;
    int n = s.size();
    int ans =0;
    for(int i=0; i<n; i++){
        if(s[i]=='v'){
            ans = ans + 1;
        }else{
            ans = ans + 2;
        }
    }

    cout<<ans<<'\n';
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