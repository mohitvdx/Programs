// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

int n; 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans=0;
int j=0;

int fibo(int i){
    
    if(i==1 || i==2){
        return i-1;
    }

    return ans = fibo(i-1) + fibo(i-2);

}

void solve(){
    n; cin>>n;

    cout<<fibo(n);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

*/