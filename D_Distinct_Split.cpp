// Mohit Verma "mohitvdx"
// problem:

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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int maxi = INT_MIN;

        vector<int> prefixUnique(n,0), suffixUnique(n,0);
        unordered_set<char> prefix;
        unordered_set<char> suffix;

        for(int i=0; i<n; i++){
            prefix.insert(s[i]);
            prefixUnique[i]=prefix.size();
        }
        for(int i=n-1; i>=0; i--){
            suffix.insert(s[i]);
            suffixUnique[i]=suffix.size();
        }


        for (int i = 0; i < n-1; i++)
        {
            maxi = max(maxi, prefixUnique[i]+suffixUnique[i+1]);
        }

        cout << maxi << '\n';
    }
}

/*

so why did i use, sort with unique here ... well unique only works on consecutive same characters ==> so something like execmdkm will have 8 unique characters according to the unique function.
==> gives time limit exceeded using set
c   execmdkm ==> excmdkem
1+  6
*/