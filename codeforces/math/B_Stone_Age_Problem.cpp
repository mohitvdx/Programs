// Mohit Verma "mohitvdx"
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
        int n; cin>>n;
        int q; cin>>q;
        int ans=0;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            ans+=a[i];
            }

        int lastAll = -1; int lastVal=0;
        map<int,int> lastChangedIndex;   // this map maintains when the value was last changed 

        for(int i=0; i<n; i++){
            lastChangedIndex[i]=0;
        }

        for(int i=1; i<=q; i++){
            int t; cin>>t;

            if(t==1){
                int pos,x; cin>>pos>>x; 
                pos--;

                if(lastChangedIndex[pos]>lastAll){
                    ans+=(x-a[pos]);
                }else{
                    ans+=(x-lastVal);
                }
                a[pos]=x;
                lastChangedIndex[pos]=i;
                cout<<ans<<'\n';

            }else{

                int x; cin>>x;
                lastAll=i; lastVal=x;
                ans = x*n;
                cout<<(x*n)<<'\n';
            }
        }


    // }
}

/*
5 3
1 2 3 4 5
2 1
1 1 7
1 1 5

this is a constructive algorithm ques--> in ques like these try to work up an example and see the working pattern 
*/