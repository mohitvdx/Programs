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
   
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
    if(s.length()<=10){
        cout<<s<<'\n';
    }else{
        int length = s.length()-2;
        // string result = s[0] + length + s[s.length()-1]; //this is not working for some reason 
        cout<< s[0] << length << s[s.length()-1]<<'\n';
    }
    }
}
