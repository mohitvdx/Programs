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
        int  n;
        cin>>n;

        string s;
        cin>>s;

        unordered_map<string,int> mpp;

        for(int i=1; i<n; i++){
            string s1 = s.substr(i-1, 2);
            mpp[s1]++;
        }
        int maxi = INT_MIN;
        string ans;
        for(auto k: mpp){
            if(k.second > maxi){
                maxi = k.second;
                ans = k.first;
            }
        }

        cout<<ans;


    // }
}