// submitted by Mohit Verma "mohitvdx"
// problem: https://cses.fi/problemset/task/1624

#include <bits/stdc++.h>

// #define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n = 8;
int count1 = 0;

bool isValid(int row, int col, vector < string > & board) {

    if (board[row][col] == '*') {
        return false;
    }

    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] == 'q') {
            return false;
        }
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'q') {
            return false;
        }
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'q') {
            return false;
        }
    }

    return true;
}

void solve(vector < string > & board, int row) {

    if (row == n) {
        count1++;
        return;
    }


    for (int col = 0; col < n; col++) {
        if (isValid(row, col, board)) {
            board[row][col] = 'q';
            solve(board, row + 1);
            board[row][col] = '.';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO
    vector < string > board(n);
    for (int i=0; i < n; i++) {
        cin >> board[i];
    }

    solve(board, 0);

    cout << '\n' << count1 << '\n';

}