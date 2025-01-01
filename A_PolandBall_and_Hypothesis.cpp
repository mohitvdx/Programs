// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isPrime(int a){
    for(int j=2; j*j<a; j++){
        if(a%j==0){
            return false;
        }
    }
    return true;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n; cin>>n;

        for(int i=1; ;i++){
            if(!isPrime(n*i+1)){
                cout<<i<<'\n';
                break;
            }
        }
    // }
}