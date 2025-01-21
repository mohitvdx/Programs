// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

int n;
int sum=0;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int rec(vector<int> & a, int n, int m){
    if(m==0){
        return 0;
    }

    return a[n-1] + rec(a, n-1, m-1);
}

void solve(){
    int m; cin>>n>>m;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<rec( a,n, m);
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