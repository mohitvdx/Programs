// submitted by Mohit Verma "mohitvdx"
// problem: https://www.codechef.com/problems/BITEQU

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==0){
            cout<< "5 4 2 6" << endl;
        }else if(n==1){
            cout<<"2 4 "<<7<<" "<<(n^7)<<" "; //we take this separately as n^1 will give 0 when n=1 and not n
        }else{
            cout<<(1LL<<32)<<" "<<(1LL<<33)<<" "<<1<<" "<<(n^1)<<" "; //we take 1LL<<35 and 1LL<<36  
        }
        cout<<'\n';
    }
}

// 1≤a,b,c,d≤10^18
// 0≤N<2^32         => so we take 1LL<<35 and 1LL<<36 which are above the range of N so N^1 can never be equal thus satisfying the condition of distinct integers