// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n,a, b;
    cin>>n>>a>>b;

    if(n==2){
        cout<<"NO"<<'\n';
        return;
    }

    if(abs(b-a)%2==0){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
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