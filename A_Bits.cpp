// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int l,r; cin>>l>>r;

    int temp = l;

    for(int i=0; i<64; i++){
        if((temp&(1LL<<i))==0){ 
            if( (temp + (1LL<<i))>r){
                break;
            }else{
                temp = temp + (1LL<<i);
            }
        
        }
    }
    cout<<temp<<'\n';
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