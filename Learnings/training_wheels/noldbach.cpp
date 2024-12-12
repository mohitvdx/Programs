// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/problemset/problem/17/A

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sieve(int n){
    vector<int> primefinal;
    bool primes[n+1];
    fill(primes, primes+n+1, true);
    // fill is used to fill a default value in a container
    // fill ( iterator begin, iterator end, default value);

    primes[0] = false;
    primes [1] = false;

    for(int i = 2; i*i<=n; i++){
        if(primes[i]){
            for(int j = i*i; j<=n; j+=i){
                primes[j]= false;
            }
        }
    }
    for(int i = 0 ; i<=n; i++){
        if(primes[i]==true){
            primefinal.push_back(i);
        }
    }
    return primefinal;

}

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int> primefinal;

    primefinal = sieve(n);
    int count=0;

    int len = primefinal.size();

    for(int i = len-1;i>1; i--){
        for(int j = i-1; j>=1; j--){
            if(primefinal[j]+primefinal[j-1]==primefinal[i]-1){
                count++;
            }else if(primefinal[j]+primefinal[j-1]<primefinal[i]-1){
                break;
            }
        }
    }


    if(count>=k){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }


    // int t;
    // cin>>t;
    // while(t--){
        
    // }
}
