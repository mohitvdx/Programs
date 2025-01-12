// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    vector<int> a(n-1); 
    for(int i=0; i<n-1; i++) cin>>a[i];

    vector<int> ans(n);
    ans[0]=a[0];
    ans[n-1]=a[n-2];

    for(int i=1; i<n-1; i++){
        ans[i] = min(a[i],a[i-1]);
    }

    for(auto k: ans){
        cout<<k<<" ";

    }
    cout<<'\n';
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