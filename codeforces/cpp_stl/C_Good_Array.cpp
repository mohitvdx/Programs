// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%2!=0){
            cout<<0;
            return 0;
        }

        vector<int> ans;

        for(int i=0; i<n; i++){
            if(a[i] == sum - a[i] ){
                ans.push_back(i);
            }
        }
        cout<<ans.size()<<'\n';
        for(auto k: ans){
            cout<<k<<" ";
        }


    // }
}