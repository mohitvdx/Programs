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
        int n; cin>>n;
        vector<int> a(n);
        for(int i =0; i<n;i++)
        cin>>a[i];
int count=0;
        for(int i =0; i<(1<<n);i++){
            for(int j =0; j<n; j++){
                if(i>>j & 1){
                    cout<<a[j];
                    count++;
                }
            }
            cout<<'\n';
        }
        cout<<"count: "<<count<<'\n';
    // }
}