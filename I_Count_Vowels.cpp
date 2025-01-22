// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int cnt=0;

void rec(string s, int i){
    if(i>=s.length()){
        return;
    }

    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
        cnt++;
    }
    return rec(s,i+1);
}

void solve(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    rec(s,0);

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