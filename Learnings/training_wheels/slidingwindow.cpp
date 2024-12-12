// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    //
    int sum =0;
    int maxi = INT_MIN;

    for(int i=0; i<k;i++){
        sum += arr[i];
    }

    maxi = max(maxi, sum);

    //sliding window
    for(int i = k; i<n;i++){
        sum = sum + arr[i] - arr[i-k];
        maxi = max(maxi, sum);
    } 

    cout<<maxi;
    // int t;
    // cin>>t;
    // while(t--){

    // }
}
