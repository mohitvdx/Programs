// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; 
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    vector<int> a;
    a.push_back(0); 

    for (int i = 0; i < n; i++) {
        if (d[i] != 0 && a.back() - d[i] >= 0) {
            cout << -1 << "\n";
            return; 
        } else {
            a.push_back(a.back() + d[i]);
        }
    }

    for (int i = 1; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t;
    while(t--){
        solve();
    }
}

/*

*/