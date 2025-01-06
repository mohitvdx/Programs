// Mohit Verma "mohitvdx"
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
        int q; cin>>q;
        int sum=0;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            }


        while(q--){
            int t; cin>>t;

            if(t==1){
                int i; cin>>i;
                int x; cin>>x;
                sum = sum - a[i-1];
                a[i-1]=x;
                sum = sum + a[i-1];
                cout<<sum<<'\n';
            }else if(t==2){
                int x; cin>>x;
                sum=0;
                sum=x*n;
                // fill(a.begin(),a.end(),x);
                vector<int> a1(n,x); //this is a O(n) operation so it gives TLE
                a=a1;
                cout<<sum<<'\n';
            }
        }


    // }
}
 
/*
we are going to use the lazy method for solving this 
*/