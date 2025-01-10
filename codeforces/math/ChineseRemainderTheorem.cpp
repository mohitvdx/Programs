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

    int x1, y1;
    int _gcd = extendedEuclid(b, a%b, x1, y1);
    x=y1;
    y=x1-(a/b)*y1;
    return _gcd;
}

int modularInverse(int a, int m){
    int x,y;
    extendedEuclid(a,m,x,y);
    return (x%m+m)%m;
}

int chineseRemainder(vector<int> &a, vector<int> &n){
    int N=1;
    for(int ni: n) N*=ni;

    int result=0;

    for(int i=0; i<a.size(); i++){
        int Mi = N/n[i];
        int yi = modularInverse(Mi,n[i]);
        result = (result + a[i]*Mi*yi)%N;
    }
    return result;
}

void solve(){
    //for the group of equations of the form
    // x % n = a
    // k such equations we find x

    //take the array input as all k values of a and n

    int k; cin>>k;   // no. of equations
    vector<int> a(k);
    vector<int> n(k);

    for(int i=0; i<k; i++) cin>>a[i];
    for(int i=0; i<k; i++) cin>>n[i];

    int x = chineseRemainder(a,n);
    cout<<x<<'\n';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*
input number of equations k

let equations are: x % n = a can also be written as: x ≡ a (mod n)
   x % 7 = 5
   x % 433 = 431
   x % 23 = 3

Note: 0<=a<n and all the values of n are pairwise co-prime  

output will be the number x that satisfies the above congruences
*/