// Mohit Verma "mohitvdx"
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
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;

        int temp1 = min(abs(n-x1),abs(x1-1));
        int temp2 = min(abs(n-y1),abs(y1-1));

        int dis = min(temp1,temp2);

        int temp3 = min(abs(n-x2),abs(x2-1));
        int temp4 = min(abs(n-y2),abs(y2-1));

        int dis1 = min(temp3,temp4);

        cout<<abs(dis-dis1)<<'\n';

    }
}
 
/*
 
*/