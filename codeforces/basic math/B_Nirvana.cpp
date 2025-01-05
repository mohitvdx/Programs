// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    int half_power=power(a, n / 2);
    if (n % 2 == 0) {
        return half_power * half_power;
    } else {
         return half_power * half_power * a;
    }
}


signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    string s;
    cin>>s;
    int n=s.size();

    vector<int> a;
    for(int i=0; i<n; i++){
        a.push_back(s[i]-'0');
    }

    int ans= power(9,n-1)*max(a[0]-1, 1LL); //decrementing the first digit by 1, and making 
                                            //all the other digits 9.

    int p=1;                 // taking the product of the digits of the given number 
    for(int i=0; i<n; i++){
        p*=a[i];
    }

    ans=max(ans, p);

    p=1;                // comparing the products by keeping a 
                        //number of digits from the right as 9.
    for(int i=0; i<n; i++){
        ans=max(ans,p*(a[i]-1)*power(9,n-i-1));
        p*=(a[i]);
    }

    cout<<ans<<'\n';
}