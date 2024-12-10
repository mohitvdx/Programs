// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/contest/474/problem/B

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// int binarySearch(vector<int> a, int t){

// }

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int q;
    cin >> q;

    vector<int> prefix(n);
    prefix[0] = a[0];
    
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + a[i];
    }

    for (int i = 1; i <= q; i++) {
        int x;
        cin >> x;
        int l = -1;
        int r = n;
        while (r - l > 1) {
            int m = (l + r) / 2;
            (prefix[m] < x) ? l = m: r = m;
        }

        cout << r+1 << '\n';

    }



    // }
}