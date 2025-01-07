// Mohit Verma "mohitvdx"
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
        string a; cin>>a;

        string ans="";
        char flag = '-';

        for(int i=0; i<n-1; i++){
            if(a[i+1]=='0'){
                ans+='-';
            }else{
                ans+=flag;
                (flag=='-')?flag='+':flag='-';
            }
        }

        cout<<ans<<'\n';

    }
}
 
/*
 01     11     00    10 
 0-1 +  1-1 +  0-0 + 1-0 

 1 0 0 1 0 1 0 1 0 0 0 1 1
  - - - - + - - - - - + - 

*/