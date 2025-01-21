// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void generate(int n){
    if(n==1){
        cout<<1;
        return;
    }

    cout<<n<<" ";
    generate(n-1);
    }

void solve(){
    int n; cin>>n;

    generate(n);
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