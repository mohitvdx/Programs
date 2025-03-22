// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>
#include <algorithm>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;

    string s1=s;
    reverse(s1.begin(), s1.end()); // reverses inplace and returns void 
    
    if(s<s1){
        cout<<"YES"<<'\n';
        return;
    }

    if(k==0){
            cout<<"NO"<<'\n';
            return;
        }
    
    set<char> ss(s.begin(), s.end());
    if(ss.size()<=1){
         cout<<"NO"<<'\n';
         return;
    }
    
    cout<<"YES"<<'\n';
    
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t; while(t--){
        solve();
    }
}

/*

*/