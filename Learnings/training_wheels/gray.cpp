// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector < string > gray(int n) {
    vector < string > ans;
    if (n == 1) {
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }

    vector < string > prev_ans = gray(n - 1);
    int k = prev_ans.size();
    for (int i = 0; i < k; i++) {
        ans.push_back("0" + prev_ans[i]);
    }
    for (int i = k - 1; i >= 0; i--) {
        ans.push_back("1" + prev_ans[i]);
    }
    return ans;


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

    vector < string > ans = gray(n);

    for (auto c: ans) {
        cout << c << '\n';
    }

    // }
}