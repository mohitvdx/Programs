// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        if(p==5){
            cout<<2<<" "<<4;
        }else{
            cout<<2<<" "<<(p-1)/2;
        }
        cout<<'\n';
    }
}