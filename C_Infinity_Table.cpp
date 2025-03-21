// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int k;
		cin >> k;

		int a = 1;
		int x = 1;
		int i = 1;

		while (k >= x + a)
		{
			x += a;
			a += 2;
			i += 1;
		}

		int m = k - x + 1;
		if (m <= i)
			cout << m << ' ' << i << '\n';
		else
			cout << i << ' ' << (i - (m - i)) << '\n';
	
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