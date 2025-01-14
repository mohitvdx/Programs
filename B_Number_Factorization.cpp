// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    int c=0; int sum=0;
    map<int,int> mpp;

    for(int i=2; i*i<=n; i++){
        c=0;
        while(n%i==0){
            c++;
            n/=i;
            if(!mpp.count(c)){
                mpp[c]=i;
            }else{
                mpp[c]*=i;
            }
        }
    }

    if(n!=1){
        if(!mpp.count(1)){
            mpp[1]=n;
        }else{
            mpp[1]*=n;
        }
    }

    for(auto it = mpp.begin(); it!=mpp.end(); it++){
        sum+= it->second;
    }
    cout<<sum<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*

*/