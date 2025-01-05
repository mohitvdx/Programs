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
            int n; cin >> n;
            int k; cin>>k;
            vector < pair<int,int> > a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i].first;
                a[i].second=i;
            }

            int all = k/n;
            int extra = k%n;

            sort(a.begin(), a.end());
            vector<int> ans(n);

            for(int i=0; i<extra; i++){
                ans[a[i].second%n] +=1;
            }

            for(auto k:ans){
                cout<<all+k<<'\n';
            }


    // }
}