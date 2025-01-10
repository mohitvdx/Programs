#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            for (int k = a[i]; k <= 2 * n; k += a[i]) {
                int j = k - i;
                if (j > i && j <= n && a[j] == k / a[i]) {
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
