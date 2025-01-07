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
        string s; cin>>s;

        int n = s.size();
        string ans="";

        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                ans = s.substr(i,2);    // s.substr(index, length)
                break;
            }
        }
         if(ans!=""){
                cout<<ans<<'\n';
                continue;
            }

        for(int i=0; i<n-2; i++){
            if((s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])){
                ans = s.substr(i,3);
                break;
            }
        }
          if(ans!=""){
                cout<<ans<<'\n';
                continue;
            }

                cout<<-1<<'\n';

    }
}
 
/*
 
*/