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
            vector < pair<int,int> > a(n);
            int sum=0;
            for (int i = 0; i < n; i++) {
                cin >> a[i].first;
                a[i].second=i+1;
                sum+=a[i].first;
            }

            sort(a.begin(),a.end());

            int count=0;
            vector<int> ans;
            for(int i=0; i<n; i++){
                int sum1 = sum - a[i].first;
                if(sum1%2!=0){
                    continue;
                }
                if(i<n-1){
                    if(sum1/2==a[n-1].first){
                    ans.push_back(a[i].second);
                    count++;
                } 
                }else{
                    if(sum1/2==a[n-2].first){
                    ans.push_back(a[i].second);
                    count++;
                } 
                }
            }

            sort(ans.begin(), ans.end());
            cout<<count<<'\n';
            for(auto k: ans){
                cout<<k<<" ";
            }
    // }
}