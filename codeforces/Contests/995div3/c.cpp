// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> a(m);
        vector<int> b(k);

        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        
        for(int i=0; i<k; i++){
            cin>>b[i];
        }

        //lets find the ques he doesnt know and the number of question he doesnt know 
        vector<int> comp(n);
        unordered_set<int> s(b.begin(),b.end());
        for(int i=1; i<=n ; i++){
            if(s.find(i)!=s.end()){
                comp[i-1]=1;
            }else{
                 comp[i-1]=0;
            }
        }

        for(int i=0; i<m; i++){
            if(comp[b[i]]==1){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<'\n';

    }
}