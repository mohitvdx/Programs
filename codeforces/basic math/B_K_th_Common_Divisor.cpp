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
        int a,b,k;
        cin>>a>>b>>k;

        if(a<b){
            int temp=a;
            a=b;
            b=temp;
        }

        vector<int> ans;

        for(int i=1; i<=a; i++){
            if(a%i==0 && b%i==0){
                ans.push_back(i);
            }
        }

        reverse(ans.begin(), ans.end());

        cout<<ans[k-1];
    // }
}