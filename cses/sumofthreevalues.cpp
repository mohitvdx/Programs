// submitted by Mohit Verma "mohitvdx"
// problem: https://cses.fi/problemset/task/1641/

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
    vector < pair < int, int >> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    } // stored the indexes

    sort(a.begin(), a.end());   // sort

    for (int i = 0; i < n; i++) {
        int remaining = t - a[i].first;
        for (int j = i + 1, k = n - 1; j < k; j++) {
            while (a[j].first + a[k].first > remaining) { //shifting k to the left 
                k--;
            }
            if (j < k && a[j].first + a[k].first == remaining) {
                cout << a[i].second << " " << a[j].second << " " << a[k].second;
                return 0;
            }
        }
    }



    cout << "IMPOSSIBLE" << '\n';


    // }
}