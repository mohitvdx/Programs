// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    vector<int> a(n);
    map<int, int> mpp;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[i]=abs(x);
        mpp[a[i]]++;
    }
    int ans=0;

    for(auto k: mpp){
        if(k.second>1 && k.first!=0){
            ans+=2;
        }else{
            ans++;
        }
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