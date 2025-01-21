// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int len=1;

void rec(int n){
    if(n==1){
        return;
    }
    len++;
    if(n%2){
        rec(3*n+1);
    }else{
        rec(n/2);
    }
}

void solve(){
    int n; cin>>n;

    rec(n);
    cout<<len;
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