// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin >> n;
    for(int j = 0; j < n; j++){
        
        string s;
        s.reserve(2 * n);  // Preallocate space to avoid frequent reallocations --> improves performance

        s.append(j, '('); // s.append(count, ch) -> appends count ch to the end of the string in place
        s.append(j, ')');
        s.append(n - j, '(');
        s.append(n - j, ')');

        cout << s << "\n";
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin >> t;
    while(t--){
        solve();
    }
}

/*
string+string creates temporary strings and reallocates memory
it also creates extra copies 

reserve allocates memory just once
append modifies the string in place
*/