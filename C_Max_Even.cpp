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
            vector<int> even;
            vector<int> odd;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if(a[i]%2==0){
                    even.push_back(a[i]);
                }else{
                    odd.push_back(a[i]);
                }
            }

            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());

            int sum1=-1;
            int sum2=-1;

            if(even.size()>=2){
                sum1 = even[even.size()-1] + even[even.size()-2];
            }

            if(odd.size()>=2){
                sum2 = odd[odd.size()-1] + odd[odd.size()-2];
            }

            cout<<max(sum1,sum2)<<'\n';
    // }
}