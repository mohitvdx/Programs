// submitted by Mohit Verma "mohitvdx"
// problem: https://cses.fi/problemset/task/1070

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

    if(n==1){
        cout<<1;
        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    deque < int > dq;
    dq.push_back(n);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            dq.push_back(i);
        } else {
            dq.push_front(i);
        }
    }

    for (auto k: dq) {
        cout << k << " ";
    }


    // }
}