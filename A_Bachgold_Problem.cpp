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
        int n; cin>>n;

        int count=0;

        if(n%2==0){
            count = n/2;
            cout<<count<<'\n';

            while(count--){
                cout<<2<<" ";
            }
        }else{
            count = (n/2)-1;

             cout<<count+1<<'\n';

            while(count--){
                cout<<2<<" ";
            }
             cout<<3<<" ";
        }   // count is the number of two's
    // }
}