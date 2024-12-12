// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

    vector<int> primeFactors(int n){
        vector<int> primeFact;

        // primeFact.push_back(2);

        for(int i =2; i*i<=n; i++){
            while(n%i==0){
                primeFact.push_back(i);
                n=n/i;
            }
        }

        if(n>1){
            primeFact.push_back(n);
        }

        return primeFact;
    }


signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO
    
    int n ;
    cin>>n;

    vector<int> primeFact = primeFactors(n);

    for(int i = 0; i<primeFact.size(); i++){
        cout<<primeFact[i]<<" ";
    }

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
