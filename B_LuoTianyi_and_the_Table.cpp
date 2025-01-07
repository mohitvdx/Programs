// Mohit Verma "mohitvdx"
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
        int n,m;
        cin>>n>>m;

        vector<int> a(n*m);

        for(int i=0; i<n*m; i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end(),[](int a, int b){
            return a>b;
        });
        int min1;
        int min2;

        if(n>=m){
            min2 = a[n*m-1];
            min1 = a[n*m-2];
        }else{
            min1= a[n*m-1];
            min2= a[n*m-2];
        }

        int max = a[0];

        int ans=(max-min1)+(max-min2);


        for(int i=2; i<m; i++){
            ans+=max-min1;
        }

        for(int i=2; i<n; i++){
            ans+=max-min2;
        }

        int min3=min(min1,min2);

        for(int i=0; i<((n-1)*(m-1)); i++){
            ans+=max-min3;
        }

        cout<<ans<<'\n';

    }
}
 
/*
 
*/