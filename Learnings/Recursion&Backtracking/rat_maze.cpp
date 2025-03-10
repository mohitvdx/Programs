// submitted by Mohit Verma "mohitvdx"

// problem: generate all the paths, when left, right, down, up all are allowed and print the possible paths

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int count1=0;
int di[] = {0,1,0,-1};
int dj[] = {1,0,-1,0};
string s = "RDLU";

bool isValid(int i, int j, int n, int m, vector < vector < int > > & arr) {
    if (i >= 0 && j >= 0 && i < n && j < m && arr[i][j] == 0) {
        return true;
    }
    return false;
}

void generate(int i, int j, int n, int m, vector < vector < int > > & arr, string & path) {

    if (i == n - 1 && j == m - 1) {
        cout << path << '\n';
        count1++;
        return;
    }

    arr[i][j] = 1;

    for (int a = 0; a < 4; a++) {
        if (isValid(i + di[a], j + dj[a], n, m, arr)) {
            path.push_back(s[a]);
            // call all paths
            generate(i + di[a], j + dj[a], n, m, arr, path);
            path.pop_back();
        }
    }
    //un marking the block (backtracking)
    arr[i][j] = 0;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int n, m;
    cin >> n >> m;
    vector < vector < int > > arr(n, vector < int > (m, 0));
    string path = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    if (arr[0][0] == 0 && arr[n - 1][m - 1] == 0) { // Ensure start and end are open
        generate(0, 0, n, m, arr, path);
    } else {
        cout << "No valid paths available." << '\n';
    }

    cout<<"Total number of paths possible: "<<count1<<'\n';
    return 0;

}

// TC: O(2^(NxM))
// SC: O(N+M)

// 3
// 3
// 0 0 0
// 1 0 0
// 0 0 0

// 00010100101
// 10101000101
// 01010100101
// 11001001000
// 10101001010
// 10000100000
// 10000000000
// 10001000000
// 10100100000
// 10000000000
// 00000001000

// 8 8
// 0 0 0 0 0 1 0 0
// 1 0 1 0 0 0 0 0
// 0 1 0 1 0 1 0 0 
// 1 1 0 0 0 0 0 1 
// 1 0 1 0 1 0 0 1 
// 1 0 0 0 0 1 0 0 
// 1 0 0 0 0 0 0 0 
// 1 0 0 0 1 0 0 0 
