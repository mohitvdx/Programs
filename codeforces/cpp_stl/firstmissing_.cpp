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
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i =0; i<n; i++){
            cin>>a[i];
        }

        set<int> s(a.begin(),a.end());

        for(int i=-m; i<=m; i++){
            if(s.find(i)==s.end()){
                cout<<i<<'\n';
                return 0;
            }
        }


    // }
}