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
        int n; cin>>n;

            vector < int > a(n);
            vector < int > b(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            for (int i = 0; i < n; i++) cin >> b[i];

            vector<int> dmin(n);
            vector<int> dmax(n);

            for (int i = 0; i < n; i++){
                dmin[i]=b[0]-a[i];
                dmax[i]=b[n-1]-a[i];
            }

            for(auto k:dmin){
                cout<<k<<" ";
            }
            cout<<'\n';
            for(auto k:dmax){
                cout<<k<<" ";
            }
            cout<<'\n';


    }
}