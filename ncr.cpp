// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int rec(int n, int r){
    if (r == 0 || r == n){
        return 1;
    }

    return rec(n - 1, r - 1) + rec(n - 1, r);
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int n, r;
    cin >> n >> r;
    cout << rec(n, r);
    // }
}

/*

*/