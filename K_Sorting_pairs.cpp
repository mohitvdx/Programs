// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct Friend {
    string name;
    int salary;
};

bool compare (Friend const &a, Friend const &b){
    if(a.salary!=b.salary){
        return a.salary>b.salary;
    }

    return a.name<b.name;
    }

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;

        vector<Friend> friends(n);

        for(int i=0; i<n; i++){
            cin>>friends[i].name>>friends[i].salary;
        }

        sort(friends.begin(), friends.end(), compare);

      for (const auto& k : friends) {
    cout << k.name << " " << k.salary << '\n';
}


    // }
}