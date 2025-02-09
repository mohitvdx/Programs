// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool rec(int i, int n){
    if(i==n){
        return true;
    }else if(i>n){
        return false;
    }

    return rec(i*10, n)||rec(i*20, n);
}

void solve(){
    int n; cin>>n;

    cout<<(rec(1,n)?"YES":"NO")<<'\n';
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