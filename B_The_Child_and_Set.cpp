// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int sum, limit;
    cin >> sum >> limit;

    vector<int> result;
    
    for(int x=limit; x>=1; x--){
        int lowbit = x & -x;

        if(sum>=lowbit){
            sum-=lowbit;
            result.push_back(x);
        }
    }

    if(sum==0){
        cout<<result.size()<<'\n';
        for(auto k: result) cout<<k<<" ";
    }else{
        cout<<-1;
    }
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); // Fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

Explanation:
- We iterate from `limit` down to `1`, checking if we can use the number in our sum.
- The `lowbit(x) = x & -x` operation efficiently extracts the lowest power of 2 in `x`.
- We greedily subtract `lowbit(x)` from `sum` when possible.
- If we reduce `sum` to `0`, we print the numbers used; otherwise, the solution is impossible.

Complexity: O(limit)

*/
