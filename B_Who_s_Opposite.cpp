// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int a,b,c; cin>>a>>b>>c;

    int gap  = abs(a-b);
    int total  = gap*2;

    if(total>=max(a,max(b,c))){
        if(c+gap<=total ){
             cout<<c+gap<<'\n';
        }else{
             cout<<c-gap<<'\n';
        }
       
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