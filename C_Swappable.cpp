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
            cin >> n;
            vector < int > a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            int totalPair = (n*(n-1))/2;
            int invalidPair =0;

            sort(a.begin(), a.end());
            int count=0;

            for (int i = 1; i < n; i++) {
            if(a[i]==a[i-1]){
                count++;
            }else{
                invalidPair = invalidPair + ((count+1)*count)/2;
                count=0;
               }
            }

            invalidPair = invalidPair + ((count+1)*count)/2;

            cout<<totalPair-invalidPair<<'\n';

            // for(auto l:a){
            //     cout<<l<<" ";
            // }


    // }
}