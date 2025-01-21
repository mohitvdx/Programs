// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void generate(vector<int> a, int maxi, int i){
    if(i>=a.size()){
        cout<<maxi;
        return;
    }
    if(a[i]>maxi){
        maxi = a[i];
    }

    generate(a, maxi, i+1);
} 

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int maxi  = INT_MIN;;
    generate(a, maxi, 0);

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