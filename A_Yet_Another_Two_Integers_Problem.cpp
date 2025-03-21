// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int a,b; cin>>a>>b;

    int diff = abs(a-b);
    int minTries = diff/10;

    if(diff>minTries*10){
        cout<<minTries+1<<'\n';
    }else{
        cout<<minTries<<'\n';
    }
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