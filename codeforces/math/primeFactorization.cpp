// Mohit Verma "mohitvdx"
// Problem: Prime Factorization

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> primes;

// Optimized Sieve to generate primes up to `limit`
void sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

// Prime Factorization Function
vector<int> primeFactorize(int x) {
    vector<int> factors;

    // Use precomputed primes for factorization
    for (int p : primes) {
        if (p * p > x) break; // Stop early if `p*p > x`
        while (x % p == 0) {
            factors.push_back(p);
            x /= p;
        }
    }
    if (x > 1) factors.push_back(x); // Remaining factor (if any)
    return factors;
}

void solve() {
    
    int x; cin >> x;
    vector<int> primeFactors = primeFactorize(x);

    for (int factor : primeFactors) {
        cout << factor << " ";
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute primes up to sqrt(max_x)
    sieve(sqrt(100000));

    // int t; cin >> t;
    // while (t--) {
    solve();
    // }
}
