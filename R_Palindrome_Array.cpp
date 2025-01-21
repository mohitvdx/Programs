// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool rec(vector<int>& a, int i,int j){
    if(a[i]!=a[j]){
        // cout<<"fe";
        return false;
    }
    
    if(i>j){
        return true;
    }
    return rec(a,i+1,j-1);
}

void solve(){
    int n; cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int i=0;
    int j=n-1;
    bool ans  = rec(a,i,j);
    // cout<<ans?"YES":"NO";      << has a higher precedence than the ternary operators 
    cout<<(ans?"YES":"NO");
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