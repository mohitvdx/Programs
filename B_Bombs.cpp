// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int r, c; cin>>r>>c;

    vector<string> s(r);
    for(int i=0; i<r; i++){
        cin>>s[i];
    }
    vector<vector<bool>> bombs(r,vector<bool>(c,false));
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(!isdigit(s[i][j])) continue;

            int power = s[i][j]-'0';

            for(int nr=0; nr<r; nr++){
                for(int nc=0; nc<c; nc++){
                    if(abs(nr-i)+abs(nc-j)<=power) bombs[nr][nc] = true;
                }
            }
        }
    }

    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            if(bombs[i][j]==true) s[i][j]='.';
        }
    }

    for(auto k:s) cout<<k<<'\n';


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