// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void sieve(bool primes[], int n){
    // bool primes[n+1];
    fill(primes, primes+n+1, true);
    // fill is used to fill a default value in a container
    // fill ( iterator begin, iterator end, default value);

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

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO
    bool primes[1001];
    sieve(primes, 1000);

    for (int i =0; i<1001; i++){
        if(primes[i]){
            cout<<i<<'\n';
        }
    }
    //printing all prime numbers upto n

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
