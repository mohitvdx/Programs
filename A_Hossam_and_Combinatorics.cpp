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

        sort(a.begin(),a.end());

        int maxdiff = abs(a[0]-a[n-1]);

        int count1=1;
        int count2=1;

        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]) count1++;
            else break;
        }

        for(int i=n-1; i>=0; i--){
            if(a[i]==a[i-1]) count2++;
            else break;
        }

        int ans = (maxdiff==0)? n*(n-1) : 2*(count1)*(count2);  // handling edge case for max difference is 0 --> then all the pairs are valid;
        //this edge case comes under the category of checking base cases

        cout<<ans<<'\n';
    }
}
 
/*
 
*/