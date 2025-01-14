#include <bits/stdc++.h>
using namespace std;

#define int long long 


void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    int total_a = 0, total_b = 0;
    int mismatch_count = 0, need = 0, surplus = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_a += a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        total_b += b[i];
        if (b[i] > a[i]) {
            mismatch_count++;
            need = max(need, b[i] - a[i]); // Track the largest deficit
        } else {
            surplus = min(surplus, a[i] - b[i]); // Track the smallest surplus
        }
    }

    // Check conditions
    if (mismatch_count > 1 || total_b > total_a || need > surplus) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
