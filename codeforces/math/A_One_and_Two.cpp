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

    vector<int> a(n);
    int twos = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]==2) twos++;
    }

    // if (sum % 2 == 1){
    //     cout << -1 << '\n';
    //     return;
    // }
    int ktwos=0;
    for(int i=0; i<n; i++){
        if(a[i]==2) ktwos++;

        if(ktwos*2==twos) {cout<<i+1<<'\n'; return;}
        else if(ktwos*2>twos) break;
    }

    cout << -1 << '\n';
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
checking the product at every k and comparing is a good strategy but multiplying so many numbers give integer overflow in the expression and the program exceeds the memory limit 
*/