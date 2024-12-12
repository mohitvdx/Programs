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
    string t;
    cin>>t;

    reverse(s.begin(), s.end());

    if(s==t){
        cout<< "YES";
    }else{
        cout<<"NO";
    }
    }

//OR
// cout<< (s==t)?"YES":"NO"<<'\n';