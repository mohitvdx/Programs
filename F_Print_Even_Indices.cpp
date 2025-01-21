// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void generate(vector<int>& a, int i){
    if(i>=a.size()){
        return;
    }
        int temp = a[i];
    generate(a, i+2);
    cout<<temp<<" ";
}

void solve(){
    int n; cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0;
    generate(a, i);
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