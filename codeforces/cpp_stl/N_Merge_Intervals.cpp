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

        vector<pair<int,int>> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i].first;
            cin>>a[i].second;
        }

        sort(a.begin(), a.end());
        vector<pair<int,int>> b;
        int first;
        int second;
        first = a[0].first;
        for(int i=0; i<n-1; i++){
            
            if(a[i].second >= a[i+1].first){
                second = max(a[i+1].second, a[i].second);
                }else{
                b.push_back({first,second});
                first = a[i+1].first;
            }
        }
        b.push_back({first,second});

    for(auto k: b){
        cout<<k.first<<" "<<k.second<<'\n';
    }


    // for(auto k: a){
    //     cout<<k.first<<" "<<k.second<<'\n';
    // }
    // }
}