// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int catalan(int n){
    int result =1;

    for(int i=0; i<n-1; i++){
        result *= (2*n-i);
        result /= (i+1);
    }
    return result/(n);
}

//the reason we are dividing by n at the end is because we are calculating the n-1 terms in the numerator and the denominator, but the denominator has n terms. so we are handling the last term n like that.

void solve(){
    int n; cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<catalan(i)<<" ";
    }
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