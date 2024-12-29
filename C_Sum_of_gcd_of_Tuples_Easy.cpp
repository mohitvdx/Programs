// submitted by Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int k;
    cin >> k;
    int sum=0;
    for (int a = 1; a <= k; a++){
        for (int b = 1; b <= k; b++){
            for (int c = 1; c <= k; c++){
                int temp = gcd(a,b);
                sum += gcd(temp,c);
            }
        }
    }

    cout<<sum<<'\n';
    // }
}