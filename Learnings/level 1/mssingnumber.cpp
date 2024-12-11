// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1083

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
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    int sum1 = (n * (n + 1)) / 2;

    cout << sum1 - sum << '\n';

    // cout << (n * (n + 1)) / 2 - sum << '\n';
    // }
}