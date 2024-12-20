// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

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
    string s;
    // cin>>s; not how you take an entire sentence as an input 
    getline(cin, s);

    int n = s.size();

    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }
    int c = 0;
    for (int i = 1; i < n; i++) {
        if ((s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == '!' || s[i] == ' ') && !(s[i - 1] == '.' || s[i - 1] == ',' || s[i - 1] == '?' || s[i - 1] == '!' || s[i - 1] == ' ')) {
            c++;
        }
    }
    if (!(s[n - 1] == '.' || s[n - 1] == ',' || s[n - 1] == '?' || s[n - 1] == '!' || s[n - 1] == ' ')) {
        cout << c + 1;
    } else {
        cout << c;
    }
    // }
}