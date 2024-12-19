// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/contest/279/problem/B

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
    int n, t;
    cin >> n >> t;
    vector < int > input(n);

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

   int i = 0, j = 0, current_sum = 0, max_books = 0;

    while (j < n) {
        current_sum += input[j];
        while (current_sum > t) {
            current_sum -= input[i];
            i++;
        }
        max_books = max(max_books, j - i + 1);
        j++;
    }

    cout << max_books << '\n';
    return 0;
}