// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        reverse(a.begin(),a.end());

        vector<int> ans(n);
        ans[0]=a[0];
        ans[1]=a[n-1];

        for(int i=2; i<n; i++){
            ans[i]=a[i-1];
        }

        if(ans[0]==ans[1]){
            cout<<"NO"<<'\n';
            continue;
        }

         cout<<"YES"<<'\n';
        for(auto k:ans){
            cout<<k<<" ";
        }
        cout<<'\n';
    }
}
 
/*
 
*/