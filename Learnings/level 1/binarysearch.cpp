// submitted by Mohit Verma "mohitvdx"

// problem:

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int binarySearch(vector<int> a, int t){

    int l = -1, r = a.size();
    while (r - l > 1){
        int m = (l + r) / 2;
        (a[m]<=t) ? l = m : r = m;
    }

    if ((l >= 0 && a[l] == t)){
        return l;
    }else if ((r < a.size() && a[r] == t)){
        return r;
    }else{
        return -1;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    vector<int> a(n); // initializing vector with size to take input
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int target;
    cin >> target;

    cout<<binarySearch(a, target);

    return 0;
    // }
}
