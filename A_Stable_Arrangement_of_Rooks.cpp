// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n,k;
    cin>>n>>k;
    int count =0;
    if(k <= ceil((n+2-1)/2)){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i%2 && j%2 && i==j && count<k){
                    cout<<"R";
                    count++;
                }else{
                    cout<<".";
                }
            }
            cout<<'\n';
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