// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int k; cin>>k;
    int ans=1;
    int j=1;
    int i=1;
    while(j<=k){
        if(i%3!=0 && i%10!=3){
            ans=i;
            i++;
            j++;
        }else{
            i++;
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