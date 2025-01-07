// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;

        if(n<5){
            cout<<-1<<'\n';
            continue;
        }

        for(int i=1; i<=n; i++){
            if(i%2==0 && i!=4) cout<<i<<" ";
        }
        cout<<4<<" "<<5<<" ";
        for(int i=1; i<=n; i++){
            if(i%2!=0 && i!=5) cout<<i<<" ";
        }

    }
}
 
/*
 
*/