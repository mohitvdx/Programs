// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i =0; i<n ;i++){
            cin>>a[i];
        }

        unordered_map<string, function<void()>> operations; 

        operations["pop_back"] = [&](){
            a.pop_back();
        };

         operations["front"] = [&]() {
        cout << a.front() << '\n';
    };

    operations["back"] = [&]() {
        cout << a.back() << '\n';
    };

    operations["sort"] = [&]() {
        int l, r;
        cin >> l >> r;
        sort(a.begin() + l - 1, a.begin() + r);
    };

    operations["reverse"] = [&]() {
        int l, r;
        cin >> l >> r;
        reverse(a.begin() + l - 1, a.begin() + r);
    };

    operations["print"] = [&]() {
        int pos;
        cin >> pos;
        cout << a[pos - 1] << '\n';
    };

    operations["push_back"] = [&]() {
        int x;
        cin >> x;
        a.push_back(x);
    };

        for(int i=0; i<q; i++){
            string s;
            cin>>s;

            operations[s]();
            
        }
    // }
}