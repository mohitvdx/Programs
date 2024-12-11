// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//using power exponentiation
int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    int half_power=power(a, n / 2) % MOD;   //MOD here only as the range will overflow the long long
    if (n % 2 == 0) {
        return half_power * half_power;
    } else {
         return half_power * half_power * a;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;

    int ans = power(2, n) % MOD;
    cout << ans << '\n';
    // }
}