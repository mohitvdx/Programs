// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

    //binary exponentiation 
    //TC O(logN)
    int power(int a, int b ){

        if(b==0){
            return 1;
        }
        
        int half_power = power (a,b/2);

        if(b%2==0){
            return half_power*half_power;
        }else{
            return half_power*half_power*a;
        }

    }
  

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int a,b;
    cin>>a>>b;

    cout<< power(a,b) << '\n';


    // int t;
    // cin>>t;
    // while(t--){

    // }
}
