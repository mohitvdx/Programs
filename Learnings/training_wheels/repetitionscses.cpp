// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/result/11341658/

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

	string s;
	cin>>s;
    int n  =s.length();
    // int k = 7;

    // cout<<n;
    // int maxi = INT_MIN;
    // int j=0;
    // for(int i=0; i<=n-1;i=j){
    //     int count=0;
    //     for(j = i; j<=n-1; j++){
    //         if(s[i]==s[j]){
    //             count++;
    //         }else{
    //             break;
    //         }
    //     }
    //     maxi = max(maxi, count);

    // } //TLE


    int maxi = INT_MIN;
    int j=0;
     int count=0;
    for(int i=0; i<=n-1;i++){

            if(s[i]==s[j]){
                count++;
            }else{
                j=j+count;
                count=1;
                continue;
            }

        maxi = max(maxi, count);

    }

    cout<<maxi<<'\n';

	// cout<<s;

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
