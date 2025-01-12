// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);
    int sum1=0;
    int sum2=0;

    for(int i=0; i<n; i++) {
        cin>>a[i];
        sum1+=a[i];
        }

    for(int i=0; i<n; i++) {
        cin>>b[i];
        sum2+=b[i];
        }

        if(sum1<=sum2){
            cout<<"NO"<<'\n';
            return;
        }

        vector<int> diff(n);

        for(int i=0; i<n; i++){
            diff[i] = b[i]-a[i];
        }

        int minpositive=INT_MIN;
        int maxindex;
        int minindex;
        int count=0;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i=0; i<n; i++){
            
            if(diff[i]>0 && diff[i]<minpositive){
                minpositive = diff[i];
                count++;
            }

            if(diff[i]>maxi){
                maxi = diff[i];
                maxindex = i;
            }
            if(diff[i]<mini){
                mini = diff[i];
                minindex = i;
            }
        }

        if(abs(mini)>minpositive*count){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }


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