// submitted by Mohit Verma "mohitvdx"

// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int count1 = 0;
int n;
int s;
// vector<int> arr(n); this cannot be since n is uninitialized at this point 
vector < int > arr;
vector < int > vec;

void backtrack_sum(int i, vector < int > & vec) {
    if (i == n) {
        int sum = 0;
        for (auto k: vec) {
            sum += k;
        }
        if (sum == s) {
            count1++;
        }
        return;
    }

    vec.push_back(arr[i]);
    backtrack_sum(i + 1, vec);
    vec.pop_back();
    backtrack_sum(i + 1, vec);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    backtrack_sum(0, vec);
    cout << count1 << '\n';
    // }
}