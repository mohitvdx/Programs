// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int x; cin>>x;

    vector<int > a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout<<i+1<<'\n';
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