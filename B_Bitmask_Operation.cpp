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
        int q,n;
        cin>>q>>n;

        while(q--)
        {
            int y;
            cin>>y;
            int x;
            cin>>x;
            if(y==1){
                 cout << ((static_cast<unsigned long long>(n) >> x) & 1) << '\n';
            }else if(y==2){
                n = n | (1LL << x);
                cout<<n<<'\n';
            }else if(y==3){
                 n = n & (~(1LL << x));
                cout<<n<<'\n';
            }else if(y==4){
                n = n ^ (1LL << x);
                cout<<n<<'\n';
            }

        }
    // }
}