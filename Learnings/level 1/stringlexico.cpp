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
   
    string s1;
    string s2;

    cin >> s1 ;
    cin >> s2;

     transform(s1.begin(), s1.end(), s1.begin(),
              ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(),
              ::tolower);
    // s1= s1.toLowerCase();    
    // s2=s2.toLowerCase();

    if(s1==s2){
        cout<<0;
    }else if (s1>s2){
        cout<<1;
    }else{
        cout<<-1;
    }
}
