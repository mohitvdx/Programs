// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int x){
    if(x<2) return false;
    for(int i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }
    return true;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int k; cin>>k;

        while(!isPrime(k)) k++;
        cout<<k<<'\n';
    // }
}