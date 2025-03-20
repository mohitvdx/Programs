// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    int k=0; int i=0;

    while(pow(2,k)<n){
        k++;
        i++;
    }

    int rem  = pow(2,k) - n;

    int a = i*pow(2,k);
    int b = n;

    if(gcd(a,b)!=1){
        int _gcd=gcd(a,b);
        cout<<a/_gcd<<"/"<<b/_gcd<<'\n';
    }else{
        cout<<a<<"/"<<b<<'\n'; //reduce it to the simplest form 
    }


    
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*
n people 
coin toss
all knights should have equal prob to get chosen (1/n)
expected number of tosses as simplest fraction

4
1 1 1 1 => 1 1 => 1   --- > two tosses

3
1 1 1 .1 => 1 1 => 1   ---> two tosses
        =>  1 .1       ---> 1 toss

if 2^k  give k/1

i dont see any pattern in the answers except the 2^k gives k

2+ (1 - 1/3)

1+2+4+8+16...  ==> assumption 

reverse logic 
6 - 3
  - 3 - 1
      - 2 - 1
          - 1

     2 toss each try.

     o
    /\
    o o
    /\ /\
    o o o o
    /\ /\ /\ /\
    o oo oo oo o
    1 23 45 6   

    choosing after one try  -> 6/8
    so tries to choose one 8/6

    so tosses total == (3*8)/6

*/