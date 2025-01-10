// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    // int mini = INT_MAX;

    vector<int> p(n+1);
    int hcf1=p[1];
    for(int i=1; i<=n; i++){
        cin>>p[i];
        if(p[i]!=i){
            // mini = min(mini, abs(p[i]-i));
            hcf1 = gcd(hcf1,p[i]-i);
        }
    }
    cout<<hcf1<<'\n';

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