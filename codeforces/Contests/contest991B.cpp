// submitted by Mohit Verma "mohitvdx"

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

        int n;
        cin>>n;
        vector<int> a(n);

        for(int i =0; i<n;i++){
            cin>>a[i];
        }

        bool result  = false;
        int oddcount= 0;

        for(int i =1; i<n-1; i ++){
            if(abs(a[i-1]-a[i+1])<=1){
                result = false;
                break;
            }else if(abs(a[i-1]-a[i])==0 || abs(a[i]-a[i+1])==0 ){
                result = false;
                break;
            }else{
                if((a[i-1]-a[i+1])%2==0){
                     if(n>3){
                         result  = true;
                     }else if(abs(a[i-1]-a[i])!=0 && abs(a[i]-a[i+1])!=0 ){
                         result  = true;
                     }
                
                }else if (abs(a[i-1]-a[i+1])%2!=0){
                oddcount ++;
                result = false;
                }
            }
           
        }
        if(result){
            cout<<"YES"<<'\n';
        }else if(oddcount%2==0 && oddcount>0){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
}
