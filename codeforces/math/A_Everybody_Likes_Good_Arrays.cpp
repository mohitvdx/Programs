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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        if(n==1){
            cout<<0<<'\n';
            continue;
        }

        int count = 0;
        
        for(int i=0; i<n-1; i++){
            if(!(a[i]%2!=a[i+1]%2)){
                count++;
            }
        }

        cout<<count<<'\n';


    }
}
 
/*
 
*/