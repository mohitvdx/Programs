// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        n=n-1;

        for(int i=2; i<n; i++){
            int a=i;
            int b=n-a;

            if(gcd(a,b)==1){
                 cout<<a<<" "<<b<<" "<<1<<'\n';
                 break;
            }
        }
    }
}