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
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());

        for(int i=-1*m, j=0;i<m;i++,j++){
            if(vec[j]>i){
                cout<<i<<'\n';
                break;
            }
        }
    // }
}