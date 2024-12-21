// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin >> t;
    // while (t--) {
        int n;
        cin >> n;
        vector < int > vec(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            if (vec[i] != 0) {
                flag = false;
            }
        }
        bool flag2 = true;
        if (flag) {
            cout << 0 << '\n';
            return 0;
        } else {
            for (int i = 1; i < n - 1; i++) {
                if ((vec[i - 1] != 0 || vec[i + 1] != 0) && vec[i] == 0) {
                    cout << 2 << '\n';
                    flag2 = false;
                    break;
                }
            }
            if (flag2) {
                cout << 1 << '\n';
            }
        }

    // }

}


// 1
// 0
// 2
// 1
// 1
// 2
// 1
// 2
// 0
// 1
