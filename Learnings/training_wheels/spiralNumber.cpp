// submitted by Mohit Verma "mohitvdx"
// problem: https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int r, int c) {
    if (r == c) {
        cout << r * r - (r - 1) << '\n';
    } else {
        int val = max(r, c);
        val = val * val - (val - 1);
        if (r > c) {
            if (r % 2 == 0) {
                val = val + (r - c);
            } else {
                val = val - (r - c);
            }
        } else if (c > r) {
            if (c % 2 == 0) {
                val = val - (c - r);
            } else {
                val = val + (c - r);
            }
        }
        cout << val << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--) {

        int x, y;
        cin >> x >> y;

        solve(x, y);
    }
}