// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n,d;
        cin>>n>>d;

        string s;
        string s2="";
        cin>>s;
        int temp=0;
        if(d>(s[0]-'0')){
            s2 = to_string(d)+s;
            cout<<s2<<'\n';
            return;
        }
        for(int i=0; i<n; i++){
            if(d>(s[i]-'0')){
                temp=i;
                break;
            }
            if(i==n-1){
                cout<<s+to_string(d)<<'\n';
                return;
            }
        }

        s2 = s.substr(0,temp) + to_string(d) + s.substr(temp);
        cout<<s2<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
 
/*
 
*/