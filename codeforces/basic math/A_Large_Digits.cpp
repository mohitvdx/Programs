// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int a,b;
        cin>>a>>b;

        int sum1=0;
        int sum2=0;

        for(int i=0; i<3; i++){
            sum1+=a%10;
            a = a/10;
            sum2+=b%10;
            b = b/10;
        }

        int ans = max(sum1,sum2);

        cout<<ans<<'\n';
    // }
}