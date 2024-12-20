// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// int binarySearch(vector < int > a, int t) {

//     int l = -1, r = a.size();
//     while (r - l > 1) {
//         int m = (l + r) / 2;
//         (a[m] <= t) ? l = m: r = m;
//     }

//     if ((l >= 0 && a[l] == t)) {
//         return l;
//     } else if ((r < a.size() && a[r] == t)) {
//         return r;
//     } else {
//         return -1;
//     }
// }

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n, q;
    cin >> n >> q;
    vector < int > vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;

          if (binary_search(vec.begin(), vec.end(), t)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }

    }
    // }
}