// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int cnt=0;

void rec(int s, int e){
    if(s>=e){
        if(s==e){
            cnt++;
        }
        return;
    }

    rec(s+1,e);
    rec(s+2,e);
    rec(s+3,e);
}

void solve(){
    int s,e;
    cin>>s>>e;

    rec(s, e);

    cout<<cnt;
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