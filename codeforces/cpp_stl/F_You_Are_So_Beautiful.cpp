// submitted by Mohit Verma "mohitvdx"
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
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        map<int,int> left,right;
        for(int i=0; i<n; i++){
            if(left.find(v[i])==left.end()){
                left[v[i]]==i;
            }
            right[v[i]]=i;
        }

        vector<int> poss(n);
        for(int i=0; i<n; i++){
            if(right[v[i]]==i){
                poss[i]=1;
            }
        }

        for(int i=n-2; i>=0; i--){
            poss[i] += poss[i+1];
        }

        int ans=0;

        for(int i=0; i<n; i++){
            if(left[v[i]]==i){
                ans+=poss[i];
            }
        }

        cout<<ans<<'\n';
    }
}