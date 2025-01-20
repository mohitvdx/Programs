// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int a,b; cin>>a>>b;
    int temp = a+b;
    vector<int> c(n);

    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x==temp){
            cout<<i+1;
            return;
        }
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