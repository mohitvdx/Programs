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

        if(n%2!=0){
            cout<<-1<<'\n';
        }else{
            cout<<1<<" "<<n/2<<'\n';
        }
    }
}
 
/*
 
*/