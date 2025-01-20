// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int h, w;
    cin >> h >> w;
    int count=0;

    for (int i = 0; i < h; i++)
    {

        string x;
        cin >> x;

        for (int j = 0; j < w; j++)
        {
            if(x[j]=='#'){
                count++;
            }
        }
    }

    cout<<count<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
    solve();
    // }
}

/*

*/