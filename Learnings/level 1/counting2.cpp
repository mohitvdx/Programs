// submitted by Mohit Verma "mohitvdx"

// problem: https://atcoder.jp/contests/abc231/tasks/abc231_c
// GOT TLE ==> code is correct ==> Got AC when binary search put in main instead of a seperate function (official editorial also does the same)

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int binarySearch(vector<int> a, int t){
    int l=-1; int r=a.size();
    while(r-l>1){
        int m = (l+r)/2;
        (a[m]<t)? l=m : r=m;
    }

    return a.size()-r;
}

signed main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int  n,q;
        cin>>n;
        cin>>q;

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        for(int i=1;i<=q;i++){
            int x;
            cin>>x;
            int ans = binarySearch(a,x);
            cout<<ans;

        }


        
    // }
}
