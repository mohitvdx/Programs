// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void binaryeq(int n){

    if(n==0){
        return;
    }

    int k = n%2;
    binaryeq(n/2);
    cout<<k;

}

void solve(){
    int n; cin>>n;

    binaryeq(n);

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