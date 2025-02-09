// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s;
    cin>>s;
    if(s.size()<=1) {cout<<s.size()<<'\n'; return;}

    // int count=0;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            // count++;
            cout<<1<<'\n'; return;
        }
    }
    cout<<s.size()<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*

*/