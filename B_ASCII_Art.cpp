#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w));
    vector<string> ans(h, string(w, '.')); 

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] != 0) {
                ans[i][j] = 'A'+(a[i][j] -1 ); 
            }
        }
    }

    for (int i = 0; i < h; i++) {
        cout << ans[i] << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // Fast IO

    solve();
}
