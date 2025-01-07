// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k % n == 0) {
            cout << k / n << '\n';
        } else {
            int factor = (n + k - 1) / k; // How many times we need to add k to reach n
            int adjusted_k = k * factor; 
            cout << (adjusted_k / n) + (adjusted_k % n != 0) << '\n';
        }
    }
}

/*
(n+k-1)/k is the ceil value of n/k
*/