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
        int n,q;
        cin>>n>>q;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        auto it = unique(a.begin(),a.end());
        a.erase(it,a.end());
        n = a.size();

        while(q--){
            int x;
            cin>>x;
            auto pos = lower_bound(a.begin(),a.end(),x);

            if(*pos==x){
                cout<<(pos-a.begin())<<" "<<a.end()-pos-1<<'\n';
            }else{
                cout<<(pos-a.begin()-1)<<" "<<a.end()-pos-1<<'\n';
            }

        }
            // }
}