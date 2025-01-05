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
            int number1=0;
            int number0=0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if(a[i]==1){
                    number1++;
                }else{
                    number0++;
                }
            }

            if((n/2)%2==1){
                if(number1>number0){
                    cout<<n/2+1<<'\n';
                    for(int i=0; i<=n/2; i++){
                        cout<<1<<" ";
                    }
                    cout<<'\n';
                }else{
                    cout<<n/2<<'\n';
                    for(int i=0; i<n/2; i++){
                        cout<<0<<" ";
                    }
                    cout<<'\n';
                }
            }else{
                if(number1>number0){
                    cout<<n/2<<'\n';
                    for(int i=0; i<n/2; i++){
                        cout<<1<<" ";
                    }
                    cout<<'\n';
                }else{
                    cout<<n/2<<'\n';
                    for(int i=0; i<n/2; i++){
                        cout<<0<<" ";
                    }
                    cout<<'\n';
                }

            }
    }
}