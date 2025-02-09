// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> input(n, vector<int>(m));

    vector<int> sum(n);
    vector<pair<int, int> > pos(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>input[i][j];
            sum[i] +=input[i][j];
        }
        pos[i].second = sum;
        pos[i].first = i;
    }

    sort(pos.begin(), pos.end(),
        [](const pair<int, int>& a,
            const pair<int, int>& b) {
            return a.second > b.second;
        });

    vector.push_back();
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