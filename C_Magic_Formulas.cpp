// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans ^= a[i]; 
    }

    vector<int> presum(1e6 + 4, 0); //precompute
    for (int i = 1; i <= n; i++) {
        presum[i] = presum[i - 1] ^ i; 
    }



    for (int i = 0; i < n; i++) {
        int segment = n / (i + 1); 
        int left = n % (i + 1);    

        if (segment % 2) {
            ans ^= presum[i];
        }

        ans ^= presum[left];
    }

    cout << ans << endl;

}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

*/