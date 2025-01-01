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
    
    sieve(100000);  

    int t;
    cin >> t;
    
    while (t--) {
        int d; 
        cin >> d;
        
        int p = -1, q = -1;

        for (int i = d + 1; ; i++) {
            if (primes[i]) {
                if (p == -1) {
                    p = i;
                    i=i+d-1;    // maintaining the difference of d between p and q
                } else {
                    q = i; 
                    break; 
                }
            }
        }


        int ans1 = p * q;
        int ans2 = p * p * p; // case 2
        int ans = min(ans1, ans2);

        cout << ans << '\n';
    }
}
