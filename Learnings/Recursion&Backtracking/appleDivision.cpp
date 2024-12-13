// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/result/11421548/

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mini = INT_MAX;
int sum1 = 0;

void minSum(int i, int n, vector < int > & vec, vector < int > & arr) {
    if (i == n) {
        return;
    }

    int sum = 0;
    for (auto k: arr) {
        sum += k;
    }
    mini = min(mini, abs(2 * sum - sum1));

    arr.push_back(vec[i]);
    minSum(i + 1, n, vec, arr);
    arr.pop_back();
    minSum(i + 1, n, vec, arr);
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

    vector < int > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (auto i: vec) {
        sum1 += i;
    }

    vector < int > arr;

    minSum(0, n, vec, arr);
    cout << mini << '\n';
    // }
}