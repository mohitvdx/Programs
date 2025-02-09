// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(a.size()==1){
        cout<<"YES"<<'\n';
        return;
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int bi = b[0];
    reverse(a.begin(), a.end());

    //check if the reverse is strictly decreasing

    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){
            a[i] = bi - a[i];
        }
        if(a[i]>=a[i-1]){
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
    
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