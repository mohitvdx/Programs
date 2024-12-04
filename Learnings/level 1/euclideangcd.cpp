// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

    //gcd using euclidean algorithm 
    int gcd(int a, int b){
        if(a==0){
            return b;
        }else{
            return gcd(b%a,a);
        }
    }

    //gcd euclidean using iteration 
    int gcd2(int a, int b){
        while(a){
            int t = a;
            a = b%a;
            b = t;
        }
        return b;
    }
  

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int a,b;
    cin>>a>>b;

    cout<< gcd(a,b) << '\n';

    //LCM can be found using the formula lcm = (a*b)/gcd(a,b)
    cout<<(a*b)/gcd(a,b) << '\n'; //this only works for two numbers 
    //gcd(a,b) * lcm(a,b) = a*b   /// formula 

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
