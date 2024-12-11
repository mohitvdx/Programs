// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1623

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

    vector < int > input(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input[i] = x;
        sum += x;
    }

    sort(input.begin(), input.end());
    int sumlf = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n / 2; i++) {
        sumlf = sumlf + input[i] + input[n - 1 - i];
        int smid = sum - sumlf;

        mini = min(mini, abs(sumlf - smid));
    }

    cout << mini << '\n';

    // }
}