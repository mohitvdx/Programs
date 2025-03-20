// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);

    for (auto &k : a)
    {
        cin >> k;
    }

    int ans = 0;
    for (int k = 1; k <= n; ++k)
    {
        multiset<int> s(a.begin(), a.end());
        for (int i = 0; i < k; ++i)
        {
            auto it = s.upper_bound(k - i);
            if (it == s.begin())
                break;
            s.erase(--it);
            if (!s.empty())
            {
                int x = *s.begin();
                s.erase(s.begin());
                s.insert(x + k - i);
            }
        }
        if (s.size() + k == n)
            ans = k;
    }
    cout << ans << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

/*

*/