// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mini  = INT_MAX;
int sum=0;

void MinSum(vector<int>&a, vector<int> &arr, int i ){
    if(i==a.size()){
        return;
    }
    int sum1=0;

    for(int j=0; j<arr.size(); j++){
        sum1+=arr[j];
    }

    int x = 2*sum1-sum;
    mini = min(mini, abs(x));

    arr.push_back(a[i]);
    MinSum(a,arr,i+1);
    arr.pop_back();
    MinSum(a,arr,i+1);

}

void solve(){
    int n; cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    vector<int> arr;

    MinSum(a, arr, 0);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
        cout<<mini;
    // }
}

/*

*/