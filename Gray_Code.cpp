// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    int total  = 1<<n;

    vector<string> ans;

    for(int i=0; i<total; i++){
        int gray = i^ (i>>1); //formula for calculating the hamming code 
        string binary = bitset<64>(gray).to_string(); //bitset converts the number into a set of bits if that number in binary
        ans.push_back(binary.substr(64-n));
    }

    for(auto k:ans){
        cout<<k<<'\n';
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