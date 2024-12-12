// submitted by Mohit Verma "mohitvdx"

// problem: https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

	string s;
	cin>>s;
    int n  =s.length();
    int k = 7;

    // cout<<n;

    for(int i=0; i<=n-k;i++){
        int count=0;
        for(int j = i; j<=n+k-1; j++){
            if(s[i]==s[j]){
                count++;
            }else{
                break;
            }
        }
        if(count==k){
            cout<<"YES"<<'\n';
            return 0;
        }

    }

    cout<<"NO"<<'\n';

	// cout<<s;

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
