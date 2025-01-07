// Mohit Verma "mohitvdx"
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
        int sumx=0;
        int sumy=0;
        int sumz=0;

        while(n--){ 
            int x,y,z;
            cin>>x>>y>>z;
            sumx+=x;
            sumy+=y;
            sumz+=z;

        }

        if(sumx==0 && sumy==0 && sumz==0){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    // }
}
 
/*
 
*/