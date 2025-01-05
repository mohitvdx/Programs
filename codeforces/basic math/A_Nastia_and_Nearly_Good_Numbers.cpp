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
        int a,b; cin>>a>>b;
        
        // it is given that any number can be printed so we put in the values 
        // satisfying the conditions 

        if(b==1){
            cout<<"NO"<<'\n';
             continue;;
        }

        int z=2*a*b;
        int x=a;
        int y=(2*b-1)*a;
        cout<<"YES"<<'\n';
        cout<<x<<" "<<y<<" "<<z<<'\n';

    }
}