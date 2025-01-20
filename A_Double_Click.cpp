// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int d; cin>>d;

    vector<int> t(n);

    for(int i=0; i<n; i++){
        cin>>t[i];
    }

    for(int i=1; i<n; i++){
        if(t[i]-t[i-1]<=d){
            cout<<t[i];
            return;
        }
    }
    cout<<-1;
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