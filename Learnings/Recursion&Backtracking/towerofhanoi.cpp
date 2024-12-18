// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<pair<int,int> > shift;

int solve(int n, int left, int right, int middle){
        if(n==0) return 0;
        if(n==1) {
            shift.push_back(make_pair(left,right));
            return 1;}

        int x=solve(n-1,left,middle,right);
        //shift 
        shift.push_back(make_pair(left,right));
        int y=solve(n-1,middle,right,left);
        return x+y+1;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;

        int left=1;
        int middle=2;
        int right=3;

        int ans= solve(n,left,right,middle);
        cout<<ans<<'\n';

        for(auto k:shift){
            cout<<k.first<<" "<<k.second<<'\n';
        }
    // }
}