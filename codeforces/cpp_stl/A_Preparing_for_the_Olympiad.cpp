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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int x=a[n-1];

        for(int i=0; i<n-1; i++){
            if(a[i]>b[i+1]){
                x=x+ a[i] - b[i+1];
            }
        }

        cout<<x<<'\n';
/////////

    }
}