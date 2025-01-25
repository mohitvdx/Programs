// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n, wt;
int max_score = INT_MIN;

void rec(vector<int> &w, vector<int> &v, int score, int weight, int i){
    // if(weight<=wt){
        max_score = max(max_score, score);
    // }
    if(i==n){
        return;
    }

    if(weight + w[i] <= wt){
        rec(w, v, score+v[i], weight + w[i], i+1);
        rec(w,v,score, weight, i+1);
    }else{
        rec(w,v,score, weight, i+1);
    }
}

void solve(){
   
    cin>>n>>wt;

    vector<int> w(n);
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>w[i]>>v[i];
    }

    rec(w,v,0,0,0);
    cout<<max_score;
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