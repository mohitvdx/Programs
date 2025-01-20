// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int m; cin>>m;

    vector<string> nset(n);
    vector<string> mset(m);

    for(int i=0; i<n; i++){
        string s; cin>>s;
        string s1 = s.substr(3, 6);
        nset[i]=s1;
    }

    for(int i=0; i<m; i++){
        // string s1; cin>>s1;
        cin>>mset[i];
    }

    int ans=0;

    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            if(nset[j]==mset[i]){
                ans++;
                break;
            }
        }
    }

    cout<<ans<<'\n';
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