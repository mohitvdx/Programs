// submitted by Mohit Verma "mohitvdx"

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO
   
    string s;
    cin>>s;

    if(s.size()==1){
        cout<<s;
    }else{
        string s1="";
        for(int i =0 ; i<s.size(); i+=2){
            s1+=s[i];
        }
        // cout<<s1<<'\n';
        sort(s1.begin(), s1.end());
        // cout<<s1<<'\n';
        // for (int i =0 ; i<s1.size(); i++){
        //     // if(i==s1.size()-1){
        //     //     cout<<s1[i];
        //     // }else{
        //     //     cout<<s1[i]<<"+";
        //     // }
        // }

        //OR

         for (int i =0 ; i<s1.size()-1; i++){
             cout<<s1[i]<<"+";
             cout<<s1.back();
             }
    }
}
