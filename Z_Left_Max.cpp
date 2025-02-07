// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void rec(int maxi, int i, vector<int> &a){
    if(i==a.size()){
        return;
    }

    if(a[i]>maxi){
        maxi = a[i];
    }
    cout<<maxi<<" ";

    rec(maxi, i+1,a);
}

void solve(){
        int n; cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        rec(a[0], 0,a);
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