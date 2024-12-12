// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/contest/1480/problem/C

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
map < int, int > prev_values;
int query(int index) {
    if (prev_values.find(index) != prev_values.end())
        return prev_values[index];

    if (index == 0 || index == n + 1)
        return INF;

    cout << "?" <<" "<< index << endl;
    int value;
    cin >> value;
    return prev_values[index] = value;
}

signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL); // fast IO

    cin >> n;

    int l = 0, r = n+1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        (query(m - 1) > query(m)) ? l = m: r = m;
    }
    cout << "!" <<" "<< l;
}