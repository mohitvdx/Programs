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
        string s;
        cin>>s;

        string s2="314159265358979323846264338327";

        int n = s.size();
        int i;
        for( i=0; i<n; i++){
            if(s[i]!=s2[i]){
                break;
            }
        }
        cout<<i<<'\n';
    }
}