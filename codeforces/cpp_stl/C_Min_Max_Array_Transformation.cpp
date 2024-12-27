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
        int n; cin>>n;

            vector < int > a(n);
            vector < int > b(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            for (int i = 0; i < n; i++) cin >> b[i];

            int i=0;
            int j=0;

            while(i<n){         //this will print the min array 
                if(a[i]<=b[j]){
                    cout<<b[j]-a[i]<<" ";
                    i++;
                }else{
                    while(j<n && a[i]>b[j]){
                        j++;
                    }
                }
            }

            cout<<'\n';

            j=n-1;
            int mx= b[j]-a[n-1];
            vector<int> diff;

            diff.push_back(mx);

            for(int i=n-2; i>=0; i--){      //making the dmax array in reverse order
                if(a[i+1]>b[i]){
                    j=i;
                }
                diff.push_back(b[j]-a[i]);
            }

            reverse(diff.begin(),diff.end());

            for(auto k: diff){
                cout<<k<<" ";
            }
            cout<<'\n';
    }
}