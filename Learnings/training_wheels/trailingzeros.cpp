// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1618

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
    int zeros = 0;
    for (int i = 5; n / i > 0; i = i * 5) {
        zeros = zeros + n / i;
    }

    cout << zeros << '\n';
    // }  // concept: we have to count the number of multiples of 5, 25, 125 so on 
}