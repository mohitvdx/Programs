// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int> vec={a,b,c};
        int sum = a+b+c;
        int sets = (n/sum);
        int min_days = sets*3;

        if(sets*sum==n){
            cout<<min_days<<'\n';
            continue;
        }else if(sets*sum<n){
             for (int i = 0; i < 3; i++){
                min_days++;
                if(sets*sum + vec[i]>=n){
                    cout<<min_days<<'\n';
                    break;
                }
        }
        }

       
        
        

    }
}