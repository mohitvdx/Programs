// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s; cin>>s;
    string word; cin>>word;
    unordered_map<char, int> mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]=i;
    }
    int prev=mpp[word[0]];
    int sum=0;
    for(int i=0; i<word.size(); i++){
        sum = sum + abs(prev - mpp[word[i]]);
        prev = mpp[word[i]];
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