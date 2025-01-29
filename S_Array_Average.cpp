#include <bits/stdc++.h>
#define int long long
using namespace std;

double rec(vector<int> &arr, int i) {
    if (i == arr.size()) return 0;

    return arr[i] + rec(arr, i + 1); 
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sum = rec(arr, 0);
    cout << fixed << setprecision(6) << sum / n << '\n'; 
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}
