// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int count1=0;
int ts ;
int n;

void solve(vector<int> &vec, int k){

    if(k>n){
        return;
    }

    int sum =0;
    int l = vec.size();
    for(int i =0; i<l; i++){
        sum+=vec[i];
    }

    if(2*sum==ts){
        count1= (count1 + 1)%MOD;
        return;
    }

    vec.push_back(k);
    solve(vec,k+1);
    vec.pop_back();
    solve(vec,k+1);

}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
       
        cin>>n;
        ts= (n*(n+1))/2;
        vector<int> vec;

        solve(vec,1);

        cout<<count1%MOD;
    // }
}