// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int x,n;

void rec(vector<int> &a, int i, int sum){
    if(i==n){
        if(sum==x){
            cout<<"YES";
            exit(0); 
        }
        return;
    }

    int p = sum+a[i];
    int q = sum - a[i];

    rec(a, i+1, p);
    rec(a, i+1, q);

}

void solve(){
    cin>>n;
    cin>>x;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    rec(a,1,a[0]);
    cout<<"NO";
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*
can also do by returning the bool value, using exit is not an ideal method 
*/