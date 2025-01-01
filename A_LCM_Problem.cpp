// submitted by Mohit Verma "mohitvdx"
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
        int l,r; cin>>l>>r;

        if(2*l<=r){
            cout<<l<<" "<<2*l<<'\n';
        }else{
            cout<<-1<<" "<<-1<<'\n';
        }
       
    }
}