// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int lg=0;

void rec(int n){
    if(n==1){
        return;
    }
    lg++;
    rec(n/2);
}

void solve(){
    int n; cin>>n;

rec(n);
    
    
    cout<<lg<<'\n';
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