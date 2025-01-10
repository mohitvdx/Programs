// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int a,b;
        cin>>a>>b;
        int j=b;
        int prod=1;
        for(int i=0; i<b-a; i++){
            prod=(prod%10)*(j%10);  // without this mod the integer overflow occurs 
            j--;
            if(prod%10==0){
                cout<<0;
                return 0;
            }
        }
        cout<<prod%10;
    // }
}
 
/*
 
*/