// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int l,r,x;
    cin>>l>>r>>x;
    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<'\n';
    }else if(abs(b-a)>=x){
        cout<<1<<'\n';
    }else if((r-max(a,b)>=x) || (min(a,b)-l >=x)){
        cout<<2<<'\n';
    }else if( (r-b >= x && a-l >=x ) || (r-a>=x && b-l >=x)){
        cout<<3<<'\n';
    }else{
        cout<<-1<<'\n';
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