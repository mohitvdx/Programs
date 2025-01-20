// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int q; cin>>q;

    vector<int> players(n+1,0);

    for(int i=0; i<q; i++){
        int act; cin>>act;
        int playerno; cin>>playerno;

        if(act==1){
            if(players[playerno]<2){
                players[playerno]++;
            }
        }else if(act==2){
            if(players[playerno]<2){
                players[playerno]+=2;
            }

        }else if(act==3){
            if(players[playerno]>=2){
                // players[playerno]+=2;
                cout<<"Yes"<<'\n';
            }else{
                cout<<"No"<<'\n';
            }

        }
    }
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