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

        int n,m;
        cin>>n>>m;
        int charSum = 0;
        int x=0;

        vector<string> input(n);
        for(int i = 1; i<=n; i++){
            cin>>input[i-1];
            charSum+=input[i-1].length();

             if(charSum<=m){
               x=i;
                
            }


        }

           cout<<x<<'\n';

    }
}
