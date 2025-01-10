#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 100000;

vector<int> mobius(MAX + 1, 1), freq(MAX + 1, 0);

void computeMobius() {
    vector<bool> isPrime(MAX + 1, true);
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i; j <= MAX; j += i) {
                mobius[j] *= -1; // Flip sign for each prime factor
                isPrime[j] = false;
            }
            for (int j = i * i; j <= MAX; j += i * i) {
                mobius[j] = 0; // Set to 0 for multiples of squares
            }
        }
    }
}

int modExp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int x : a) {
        for (int d = 1; d * d <= x; d++) {
            if (x % d == 0) {
                freq[d]++;
                if (d != x / d) freq[x / d]++;
            }
        }
    }

    vector<int> g(MAX + 1, 0);
    for (int x = 1; x <= MAX; x++) {
        if (freq[x] > 0) {
            g[x] = modExp(2, freq[x], MOD) - 1;
            if (g[x] < 0) g[x] += MOD;
        }
    }

    int result = 0;
    for (int x = 1; x <= MAX; x++) {
        if (freq[x] > 0) {
            int contribution = (mobius[x] * g[x]) % MOD;
            if (contribution < 0) contribution += MOD;
            result = (result + contribution) % MOD;
        }
    }

    cout << result << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    computeMobius();
    solve();
}
