// submitted by Mohit Verma "mohitvdx"

// problem:

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
// searching for the first index of occurance of a number using the binary search
int search(vector<int> a, int target)
{
    int r = a.size() - 1;
    int l = 0;

    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (a[l] == target)
    {
        return l;
    }
    else
    {
        return -1;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    cout << search(a, target);
    return 0;

    // int t;
    // cin>>t;
    // while(t--){

    // }
}
