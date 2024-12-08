// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/problemset/problem/1285/C

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int x;
        cin>>x;
        int ans = LLONG_MAX;

        for(int i=1; i*i<=x;i++){
            if(x%i==0){
                int gcd1 = gcd(i,x/i);
               // since given that X=lcm(a,b);
               //then for minimizing the max of a,b == we can minimize a*b
               // so, in a*b = gcd(a,b)*lcm(a,b)
               //     => a*b = gcd(a,b)*X
               // to minimize a*b => we know the minimum value of gcd is 1 
               //    so,   => a*b = 1*X 
                            // => a*b = X;  
                if(gcd1==1){
                    ans = min(ans,max(i,x/i));
                }

            }
        }

        cout<<ans<<" "<<x/ans;
    // }
}
