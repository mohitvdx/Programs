// submitted by Mohit Verma "mohitvdx"
// problem: 

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
        int n,d;
        cin>>n>>d;

        vector<int> ans;

        ans.push_back(1);   // check for 1

        if(n>=3 || d%3==0){ //check for 3
            ans.push_back(3);
        }
        if(d%5==0){         //check for 5
            ans.push_back(5);
        }
        if(n>=3){           //check for 7
             ans.push_back(7);
        }else{
            if(d%7==0){
                ans.push_back(7);
        }
        }

        if(n>=6 || d%9==0){ //check for 9
            ans.push_back(9);
        }else if(n<6){
            if(n==1 || n==2){
            if(d%9==0){
                  ans.push_back(9);   
                }
            }else {
                if(d%3==0){
                  ans.push_back(9);   
                }
            }
        }

        for(auto k:ans){
            cout<<k<<" ";
        }
        cout<<'\n';
    }
}