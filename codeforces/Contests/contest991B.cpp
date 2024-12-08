// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/contest/2050/problem/B

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        
        //logic is that the sum remains constant after every operation 
        // also the numbers in odd places are interdependent and the numbers at even places are interdependent
        // so check for making all equal can the sum of even and the sum of odd be equally divided among the numbers
        
        int n;
        cin>>n;
        vector<int> a(n);

         int sum_even =0;
        int sum_odd =0;

        for(int  i=0; i<n;i++){
            cin>>a[i];
            if(i%2==0){
                sum_even+=a[i];
            }else{
                sum_odd+=a[i];
            }
        }
        int oddplaces = n/2;
        int evenplaces = (n+1)/2;


            if (sum_odd%oddplaces==0 && sum_even%evenplaces==0 && sum_odd/oddplaces==sum_even/evenplaces){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }

    }
}
