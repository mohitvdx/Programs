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

    if(n%2!=0){
        cout<<"NO"<<'\n';
        return;
    }
    

    sort(a.begin(), a.end());
    int mini = a[0];
    a.pop_front();

    deque<int> ans(n);
    ans.push_back(a[n-2]);
    a.pop_back();

    for(int i=0; a.size()>0; i++){
        if(i%2==0){
            ans.push_front(a.front());
            a.pop_front();
        }else{
            ans.push_front(a.back());
            a.pop_back();
        }
    }
    a.push_front(mini);

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