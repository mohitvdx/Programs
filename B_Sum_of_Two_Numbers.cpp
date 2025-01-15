// Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int digitSum(int a){
    int sum=0;

    while(a>0){
        sum = sum + a%10;
        a/=10;
    }
    return sum;
}

void solve(){
    int n; cin>>n;
    int x,y;

        mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); // gets a random number with the time as seed
        uniform_int_distribution<int> dist(0, n ); //sets equal random probability

    // int co=0;
    while (true){
        //apparently randomizing this converges faster 
        x=dist(rng);
        y=n-x;
        // co++;

        int x1 = digitSum(x);
        int y1 = digitSum(y);

        if(abs(x1-y1)<=1){
            // cout<<"tries needed"<<co<<'\n';
            cout<<x<<" "<<y<<'\n';
            return;
        }
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