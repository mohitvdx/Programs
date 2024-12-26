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
            int n;
            cin >> n;
            int k;
            cin>>k;
            vector < int > a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            sort(a.begin(),a.end());

              if(k==0){
                if(a[0]==1){        //x cant be zero given
                    cout<<-1;
                }   else{
                    cout<<1;
                }
                return 0;
            }

            if(a[k]!=a[k-1]){
                cout<<a[k-1];
            }else{
                cout<<-1;
            }
    // }
}