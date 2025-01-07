// Mohit Verma "mohitvdx"
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if((a==0 || c==0) && (a+c!=0)){
        // cout<<"case "<< t<<" " ;
        cout<<1<<'\n';
        continue;
        }
        if(a*d==c*b){
        cout<<0<<'\n';
        continue;
        }
        
        if(max(a*d,b*c)%min(a*d,b*c)==0){
            cout<<1<<'\n';
        }else{
            cout<<2<<'\n';
        }
    }
}
 
/*
 (a!=1 && b!=1 && c!=1 && d!=1)
*/