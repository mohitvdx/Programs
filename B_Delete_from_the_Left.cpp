// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>
#include <algorithm>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s,t;
    cin>>s>>t;

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    int cnt=0;
    for(int i=0; i<min(s.size(), t.size()); i++){
        if(s[i]==t[i]){
            cnt++;
        }else{
            break;
        }
    }

    int ans = s.size()-cnt + t.size()- cnt;
    cout<<ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

*/