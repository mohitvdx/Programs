// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int generate(int n){
    if(n==1){
        return 1;
    }

    return n*generate(n-1);
}

void solve(){
    int n; cin>>n;
    int i=n;
    int ans = generate(n);
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