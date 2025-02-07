// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

double count1 = 0;
double total = 0;

void rec(int notknown, int finalpos, int currentpos){
    if(notknown==0){
        if(currentpos == finalpos){
            count1++;
            }
            total++;
            return;
    }

    rec(notknown-1, finalpos, currentpos+1);
    rec(notknown-1, finalpos, currentpos-1);
}

void solve(){
    string s1; cin>>s1;
    string s2; cin>>s2;
    int plus =0;
    int minus =0;
    int plus1 =0;
    int minus1 =0;

    for(int i=0;i<s1.size(); i++){
        if(s1[i]=='+') plus ++;
        if(s1[i]=='-') minus ++;

        if(s2[i]=='+') plus1 ++;
        if(s2[i]=='-') minus1 ++;
    }

    if(plus+minus == plus1 + minus1){
        if(plus == plus1 && minus == minus1){
            cout<<fixed<<setprecision(12)<<1.0;
        }else{
            cout<<fixed<<setprecision(12)<<0.0;
        }
    }else{  
        int notknown = plus+minus - (plus1 + minus1);
        int finalpos = plus-minus;
        int currentpos = plus1-minus1;

        rec(notknown, finalpos, currentpos);
        long double ans = count1/total;
        cout<<fixed<<setprecision(12)<<ans;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t; cin>>t;
    // while(t--){
        solve();
    // }
}

/*

*/