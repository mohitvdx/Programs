// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n * m);
        for (int i = 0; i < n * m; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        if (n > m) swap(n, m);

        // Two configurations:
        int ans1 = (n * m - 1) * a.back() - a[0] * (n * (m - 1)) - a[1] * (n - 1);
        int ans2 = a.back() * (n * (m - 1)) + a[n * m - 2] * (n - 1) - a[0] * (n * m - 1);

        cout << max(ans1, ans2) << '\n';
    }

    return 0;
}

 
/*
i still dont completely understand and dont have an intuitive understanding of why this formula works,
and why my previous approach didnt give right answers
*/