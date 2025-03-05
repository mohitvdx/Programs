// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, k, p;
    cin >> n >> k >> p;

   if(abs(k)/p < n){
    cout<<(abs(k)+p-1)/p<<'\n';
   }else{
    cout<<-1<<'\n';
   }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

/*

*/