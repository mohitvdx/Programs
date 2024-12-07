// submitted by Mohit Verma "mohitvdx"

// problem: 

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> umap;

        int n= s.length();
        int i= 0;
        int j = 1;
        int maxi = INT_MIN;
        umap[s[0]]++;
       
       while(j<n){
           if(umap[s[j]]>0){
               umap[s[i]]--;
               i++;
           }else{
               umap[s[j]]++;
               j++;
           }
           maxi=max(maxi,j-i);
       }

       cout<<maxi<<'\n';
        
    // }
}
