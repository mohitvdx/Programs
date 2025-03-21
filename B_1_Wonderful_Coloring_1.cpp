// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s; cin>>s;

    sort(s.begin(),s.end());
    map<char, int> mpp;

    for(auto c:s){ //frequency map
        mpp[c]++;
    }

    int val=0;
    for(auto k:s){
        if(mpp[k]==1){
            val++;
        }
    }

    set<char> s1(s.begin(), s.end());
    int val2= s1.size()-val;

    cout<<val/2 + val2<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*
values after it are unspecified and we should not work with those values, 
it starts to give unexpected results.
*/