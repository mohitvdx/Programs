// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    bool flag = false;
    for(int i=0; i<n; i++){
        cin>>a[i];

    if(a[i]<=2*i || a[i]<=(n-i-1)*2){
        flag = true;
    }
    }

    if(flag){
        cout<<"NO"<<'\n';
    }else{
        cout<<"YES"<<'\n';
    }

    


}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*

*/