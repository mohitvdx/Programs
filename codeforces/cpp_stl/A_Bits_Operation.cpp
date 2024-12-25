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

              int q;
        cin>>q;
        int n;
        cin>>n;

        while(q--){
            int a;
            cin>>a;

            if(a==1){
                int x;
                cin>>x;
                n=(n | x);
                   cout<<n<<'\n';

            }else if(a==2){
                 int x;
                cin>>x;
                 n=(n & x);
                cout<<n<<'\n';

            }else if(a==3){
                 int x;
                cin>>x;
                 n=(n ^ x);
                   cout<<n<<'\n';
                
            }else if(a==4){
                 n=(~n);
                  cout<<n<<'\n';

            }
        }

  


    // }
}