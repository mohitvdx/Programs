// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int extendedEuclid(int a, int b, int &x, int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }

    int x1,y1;
    int _gcd = extendedEuclid(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return _gcd;
}

void solve(){
    int a,b;
    cin>>a>>b;

    int x, y;
    int _gcd = extendedEuclid(a,b,x,y);
    // this extended euclid also gives the values of x and y for the equation
    // ax+by=gcd(a,b)
    cout<<"The equation is: \n"<<a<<"*"<<x<<"+"<<b<<"*"<<y<<"="<<_gcd;
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