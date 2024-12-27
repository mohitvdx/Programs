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
            int n;
            cin >> n;
            vector < int > a(n);
            vector < int > b(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }

            vector<int> diff(n);
            for (int i = 0; i < n; i++) {
                diff[i]=a[i] - b[i];
            }
            int count=0;
            sort(diff.begin(),diff.end());
            
            for (int i = 0; i < n; i++) {
                int x=diff[i];
                if (x<=0){
                    continue;
                }
                int pos =  upper_bound(diff.begin(),diff.end(),-x) - diff.begin();
                count =count+ i-pos;
            }

            cout<<count;


    // }
}