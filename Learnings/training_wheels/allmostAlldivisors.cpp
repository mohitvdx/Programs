// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/problemset/problem/1165/D

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b){
    if(b==0){
        return a;
    }

    return gcd(b%a,a);
}

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
       
        int n;
        cin>>n;
         vector<int> input(n);
         vector<int> b;
        for(int i=0; i<n; i++){
            cin>>input[i];
        }
        sort(input.begin(),input.end());

        int X = input[0]* input[n-1];

        for(int i=2; i*i<=X;i++){
            if(X%i==0){
                if(i==X/i){
                    b.push_back(i);
                 
                }else{
                b.push_back(i);
                   b.push_back(X/i);
                }
            }
        }

         sort(b.begin(),b.end());

        if(input==b){
            cout<<X<<'\n';
        }else{
            cout<<-1<<'\n';
        }

       
        }

}

