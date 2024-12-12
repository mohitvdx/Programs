// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1094

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
    vector < int > a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sum += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << sum << '\n';
    // }
}