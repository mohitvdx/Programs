// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<bool> primes; 

void sieve(int n){
    primes.resize(n + 1, true);

    primes[0] = false;
    primes [1] = false;

    for(int i = 2; i*i<=n; i++){
        if(primes[i]){
            for(int j = i*i; j<=n; j+=i){
                primes[j]= false;
            }
        }
    }
}// after this the index having true are the prime numbers 

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n; cin>>n;

        sieve(n);
        int x=n-2;

        while(primes[x]==true || primes[n-x]==true){
            x--;
        }

         cout<<x<<" "<<(n-x)<<'\n';
        
    // }
}