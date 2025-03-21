// Mohit Verma "mohitvdx"
// problem: store_sorted_characters

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    string s = "codeforces";
    multiset<char> char_set;

    // Iterate through the string and insert each character into the multiset
    for(char c : s){
        char_set.insert(c);
    }

    // Iterate through the multiset to print the sorted characters
    for(char ch : char_set){
        cout << ch;
    }
    cout << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    solve();
}

/*

*/