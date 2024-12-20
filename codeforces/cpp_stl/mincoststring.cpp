/**
 * The function takes a string with '?' characters and assigns values to them based on given
 * constraints, calculating the total cost of changes and outputting the modified string.
 */
// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y

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
    cin >> s;
    int n = s.size();

    vector < int > vec(26);
    for (int i = 0; i < 26; i++) {
        cin >> vec[i];
    }

    //now we will maintain a left and right of every index having '?'
    vector < int > left(n);
    vector < int > right(n);

    int c = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            c = vec[s[i] - 97];
        } else {
            left[i] = c;
        }
    }

    c = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '?') {
            c = vec[s[i] - 97];
        } else {
            right[i] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            int l = left[i];
            int r = right[i];

            if (l == -1) l = r;
            if (r == -1) r = l;
            if (l == -1 && r == -1) {
                l = 0;
                r = 1e5;
            }
            // if(l>r){
            //     swap(l,r);
            // }

            for (int j = 0; j < 26; j++) {
                if ((vec[j] >= l && vec[j] <= r)||(vec[j] <= l && vec[j] >= r)) {
                    s[i] = j + 97;
                    break;
                }
            }
        }
    }
    
    int cost = 0;
    for (int i = 1; i < n; i++) {
        cost = cost + abs(vec[s[i] - 97] - vec[s[i - 1] - 97]);
    }

    cout << cost << '\n';
    cout << s << '\n';

    // }
}