// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    vector<string> a(n);
    int countFor =0;
    for(int i=0; i<n; i++){
        cin>>a[i];  
        if(a[i]=="For"){
            countFor++;
        }
    }

    if(countFor>n/2){
        cout<<"Yes"<<'\n';
    }else{
               cout<<"No"<<'\n';
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