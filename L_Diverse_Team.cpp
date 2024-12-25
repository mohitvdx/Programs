// submitted by Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    vector<pair<int, int> > ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i].first != a[i - 1].first)
        {
            ans.push_back(a[i]);
        }
    }
    vector<int> ans1;

    for(int i=0; i<ans.size(); i++){
        ans1.push_back(ans[i].second);
    }

    sort(ans1.begin(),ans1.end());

    if (ans1.size() >= k)
    {
        cout << "YES" << '\n';
        for (int i=0; i<k; i++)
        {
            cout << ans1[i] << " ";
        }
    }
    else
    {
        cout << "NO";
    }
    // }
}