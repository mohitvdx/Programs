// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string t = "" + s[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            t = t + s[i];
            count++;
        }
    }

    cout << count << '\n';
    // }
}