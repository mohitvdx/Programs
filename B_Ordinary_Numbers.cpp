// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int k=0;
    for(int i=n; i>0; i/=10){
        k++;
    }

    int ans = (k-1)*9;
    int val=1;

    for(int i=1; i<k; i++){
        val = val*10+1;
    }

    for(int i=val; i<=n; i+=val){
        ans++;
    }

    cout<<ans<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*

*/