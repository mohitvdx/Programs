// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;
    deque<int> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];

    if(n%2){
        cout<<"NO"<<'\n';
        return;
    }
    

    sort(a.begin(), a.end());

    vector<int> ans(n);
    int j=0;
    int k=n/2;
    for(int i=0; i<n; i++){
        if(i%2==0){
            ans[i]=a[j++];
        }else{
            ans[i]=a[k++];
        }
    }
    
    for(int i=1; i<n-1; i++){
        if(ans[i]>ans[i-1]&&ans[i]>ans[i+1]){
            continue;
        }else if(ans[i]<ans[i-1]&&ans[i]<ans[i+1]){
            continue;
        }else{
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
    for(auto k: ans){
        cout<<k<<" ";
    }
    cout<<'\n';

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