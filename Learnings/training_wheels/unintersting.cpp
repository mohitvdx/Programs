// submitted by Mohit Verma "mohitvdx"

// problem: 

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;

        int sum=0;

        for(int i = n; i>0 ; i=i/10){
            sum = sum + i%10;
        }
        int x = sum%9;
        
        if(x>6 &&x%6 ==0 || x%2==0){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
        // cout<<sum;
    // }
}
