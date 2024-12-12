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
    string s1;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.size(); i++){
        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')){
           cout<<'.'<<s[i];
        }
    }

}

//string s(5,'0');  // this is how you define a fixed size string with a default value
//vector<int> v(5);  // initialising a default vector of size 5