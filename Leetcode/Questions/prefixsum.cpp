// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void fillPrefixSum(const vector<int>& a, int n, vector<int>& prefixSum){
    prefixSum.push_back(a[0]);

    for(int i = 1 ; i<n; i++){
        prefixSum.push_back(prefixSum[i-1] + a[i]);
    }
}

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    vector<int> a={1,353,2,352,235};

    vector<int> prefixSum ;

    fillPrefixSum(a, 5, prefixSum);

    for(int i = 0 ; i<5; i++){
        cout<<prefixSum[i]<<" ";
    }

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
