// submitted by Mohit Verma "mohitvdx"
// problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

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
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0; i<n;i++){
            cin>>vec[i];
        }

        vector<int> ans;

        for(int i=0; i<n;i++){
            int maxi = INT_MIN;
            for(int j=i; j<n; j++){
                maxi = max(maxi,vec[j]); ans.push_back(maxi);
            }
           
        }

        for(auto k: ans){
            cout<<k<<" ";
        }
        cout<<'\n';
    }
}