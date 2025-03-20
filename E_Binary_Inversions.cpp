// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int calc(vector<int>& a) {
    int ones=0; int ans=0;

    for(int i=0; i<a.size(); i++){
        if(a[i]==1){
            ones++;
        }else{
            ans+=ones;
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = calc(a);
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == 1) {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }
    
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
