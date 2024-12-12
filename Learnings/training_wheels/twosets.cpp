// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1092

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
        int n;
        cin>>n;

        int s = (n*(n+1))/2;
        vector<int> set1;
        vector<int> set2;

        if(s%2==0){
            if(n%4==0){
                for(int i =1; i<=n/4; i++){
                    set1.push_back(i);
                    set1.push_back(n-i+1);
                }
                for(int i = n/4 +1; i< n-n/4+1; i++){
                    set2.push_back(i);
                }

                cout<<"YES"<<'\n';
                cout<<set1.size()<<'\n';
                for(int i = 0; i<set1.size();i++){
                    cout<<set1[i]<<" ";
                }
                cout<<'\n';
                cout<<set2.size()<<'\n';
                for(int i = 0; i<set2.size();i++){
                    cout<<set2[i]<<" ";
                }
                cout<<'\n';
            }else if(n%4==3){
                set1.push_back(1);
                set1.push_back(2);
                set2.push_back(3);
            
                for(int i =1; i<=n/4; i++){
                    set1.push_back(i+3);
                    set1.push_back(n-i+1);
                }
                for(int i = n/4 +4 ; i< n-n/4+1; i++){
                    set2.push_back(i);
                }
                 cout<<"YES"<<'\n';
                cout<<set1.size()<<'\n';
                for(int i = 0; i<set1.size();i++){
                    cout<<set1[i]<<" ";
                }
                cout<<'\n';
                cout<<set2.size()<<'\n';
                for(int i = 0; i<set2.size();i++){
                    cout<<set2[i]<<" ";
                }
                cout<<'\n';
            }else{
            cout<<"NO"<<'\n';
            }
        }else{
            cout<<"NO"<<'\n';
        }
    // }
}
