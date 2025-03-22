// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>
#include <algorithm>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin>>n;

    vector<int> a(n);
    int zero_cnt=0;
    vector<int> index;
    for(int i=0; i<n; i++){ cin>>a[i]; if(a[i]==0) zero_cnt++; index.push_back(i);}

    if(zero_cnt==0){
        cout<<1<<'\n';
        cout<<1<<" "<<n<<'\n';
    }else if(zero_cnt==1){
        if(a[0]==0){
            cout<<2<<'\n';
            cout<<1<<" "<<2<<'\n';
            cout<<1<<" "<<n-1<<'\n';
        }else if(a[n-1]==0){
            cout<<2<<'\n';
            cout<<n-1<<" "<<n<<'\n';
            cout<<1<<" "<<n-1<<'\n';
        }else{
            cout<<2<<'\n';
            cout<<1<<" "<<index[0]+1<<'\n';
            cout<<1<<" "<<n-index[0]<<'\n';
        }
    }else if(zero_cnt>=2 && a[0]!=0 && a[n-1]!=0){

    }else{
       if(n>4)
    }
    
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t; cin>>t; while(t--){
        solve();
    }
}

/*

*/