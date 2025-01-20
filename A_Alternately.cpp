// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n==1){
        cout<<"Yes";
        return;
    }

    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
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