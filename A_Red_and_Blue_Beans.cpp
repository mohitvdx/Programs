// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int r,b,d; cin>>r>>b>>d;
    int diff;
    int boxes = min(r,b);
    int extra = max(r,b)-boxes;
    if(extra%boxes){
        diff = extra/boxes + 1;
    }else{
        diff = extra/boxes;
    }

    if(diff>d){
        cout<<"NO"<<'\n';
    }else{
        cout<<"YES"<<'\n';
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