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

    // auto i = "asd"; //its not a string but a string literal, so i is not a string'

    string s = "dsa";

    s[1] = 'e';

    cout << s << '\n';

    s.push_back('s');
    cout << s << '\n';

    //  s.push_back("mohit"); //invalid as we can only push back a char

    // concatenation
    string t = s + s + 'h';
    cout << t << '\n';

    // reverse the string
    reverse(t.begin(), t.end());
    cout << t << '\n';

   

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
