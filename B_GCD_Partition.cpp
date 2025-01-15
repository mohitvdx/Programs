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
    vector<int> pre(n);
    
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        }

        pre[0]=a[0];


    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]+a[i];
        }

        int totalSum  = pre[n-1];

        int maxgcd = INT_MIN;

        for(int i=0; i<n-1; i++){
            maxgcd = max(maxgcd, gcd(pre[i], totalSum - pre[i]));
        }

        cout<<maxgcd<<'\n';


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