// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    unordered_map<int,int> umap; //stores the freq of the number
    int cnt=0;

    for(int i=0; i<n; i++){
        int b = a[i] ^ x;
        cnt+=umap[b];
        umap[a[i]]++;
    }

    cout<<cnt;
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