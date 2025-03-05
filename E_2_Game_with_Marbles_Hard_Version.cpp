// Mohit Verma "mohitvdx"
// problem: Alice and Bob's Marble Game

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // Create index array and sort by descending (a[i] + b[i])
    vector<int> ids(n);
    iota(ids.begin(), ids.end(), 0);

    sort(ids.begin(), ids.end(), [&](int i, int j) {
        return a[i] + b[i] > a[j] + b[j];
    });

    // Compute final score
    int S = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1)  // Bob's turn (odd index)
            S -= b[ids[i]] - 1;
        else        // Alice's turn (even index)
            S += a[ids[i]] - 1;
    }
    cout << S << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // Fast IO

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

/*
✅ **Approach:**
- Alice and Bob play optimally.
- Sort colors by decreasing `(a[i] + b[i])` to maximize Alice’s gain.
- Alice picks first, Bob follows, alternating turns.
- Score is calculated based on remaining marbles.

✅ **Complexity Analysis:**
- **Sorting Step** → \(O(n \log n)\)
- **Processing Step** → \(O(n)\)
- **Total Complexity** → \(O(n \log n)\) per test case.
- **Overall Complexity** → \(O(T \cdot n \log n)\), which is efficient given \( \sum n \leq 2 \times 10^5 \).

*/
