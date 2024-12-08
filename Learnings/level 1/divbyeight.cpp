// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/problemset/problem/550/C

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        string s;
        cin>>s;
    int n = s.size();

    //note we are checking only till three length substring because if a three length substring is divisible by 8 
    // then the entire number is divisible by 8, as only the last 3 digits matter in division by 8 
    //"N=X*1000+Y"
        for(int i =0; i< n; i++){
            //checking for one digit substring
            if((s[i]-'0')%8==0){    //convert char to int 
                //this takes care of the number 0 and 8 in the one digit substring
                cout<<"YES"<<'\n';
                cout<<s[i]<<'\n';
                return 0;
            }

            //checking for 2 digitt substring 
           else{
                for(int j =i+1; j<n; j++){
                if(((s[i]-'0')*10+(s[j]-'0'))%8==0){  
                    cout<<"YES"<<'\n';
                    cout<<s[i]<<s[j]<<'\n';
                    return 0;
                }

                else{
                    for(int k =j+1;k<n;k++){
                    if(((s[i]-'0')*100+((s[j]-'0')*10)+s[k]-'0')%8==0){
                    cout<<"YES"<<'\n';
                    cout<<s[i]<<s[j]<<s[k]<<'\n';
                    return 0;
                }
                }
                }
            }
           }
        }
        cout<<"NO"<<'\n';
    // }
}
