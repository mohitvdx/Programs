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
            int count=0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if(a[i]%2!=0){
                    count++;
                }
            }

            if(count%2==0){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
    // }
}