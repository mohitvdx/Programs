// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int sum=0;

int rec(int i, vector<int>& a, int n){
    if(i>=n){
        return sum;
    }
    
    return  a[i]+rec(i+1, a, n);
}

void solve(){
    int n; cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<rec(0, a, n);
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