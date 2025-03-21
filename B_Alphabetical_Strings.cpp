// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s; cin>>s;
    int n = s.size();

    char a='a';
    int pos = s.find(a);
    if(pos==string::npos){
        cout<<"NO"<<'\n';
        return;
    }
    int l=pos;
    int r=pos;

    for(int i=1; i<n; i++){
        if(l>0&&a+i==s[l-1]){
            l--;
        }else if(r<n-1&&a+i==s[r+1]){
            r++;
        }else{
            cout<<"NO"<<'\n';
            return;
        }
    }

    cout<<"YES"<<'\n';
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