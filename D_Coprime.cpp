// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> pairs[1001]; // this is an array of vectors

void solve() {
    int n; cin >> n;
    vector<int> id[1001];
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        id[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= 1000; ++i) {
        for (int j : pairs[i]) {
            if (!id[i].empty() && !id[j].empty()) {
                ans = max(ans, id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
}

signed main() {
    for (int i = 1; i <= 1000; ++i) { //precomputing all co-prime pairs upto 1000
        for (int j = 1; j <= 1000; ++j) {
            if (gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin >> t;
    while (t--) {
        solve();
    }
}

/*

*/
