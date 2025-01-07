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
            int n;
            cin >> n;
            vector < int > a(n);
            int negatives=0;
            int sum=0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if(a[i]<0){
                    negatives++;
                    a[i]=-a[i];
                }
                sum+=a[i];
            }

            if(negatives%2==0){
                cout<<sum<<'\n';
            }else{
                sort(a.begin(),a.end());
                cout<<sum-2*a[0]<<'\n';
            }

    }
}
 
/*
 
*/