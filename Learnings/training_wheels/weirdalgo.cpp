// submitted by Mohit Verma "mohitvdx"
// problem: https://www.codechef.com/ide

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
        int n;
        cin>>n;

        while(n!=1){
            cout<<n<<" ";
            if(n%2==0){
                n=n/2;
            }else{
                n=n*3+1;
            }
        }
         cout<<1<<" ";
    // }
}