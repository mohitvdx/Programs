// Mohit Verma "mohitvdx"
// Problem: C. Rooks Defenders

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
using namespace std;
using namespace __gnu_pbds;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> row(n, 0), col(n, 0);
    oset<int> free_rows, free_cols;

    for (int i = 0; i < n; i++) {
        free_rows.insert(i);
        free_cols.insert(i);
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x, y;
            cin >> x >> y;
            --x, --y;

            if (++row[x] == 1) free_rows.erase(x);
            if (++col[y] == 1) free_cols.erase(y);

        } else if (type == 2) {
            int x, y;
            cin >> x >> y;
            --x, --y;

            if (--row[x] == 0) free_rows.insert(x);
            if (--col[y] == 0) free_cols.insert(y);

        } else {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            --x1, --y1, --x2, --y2;

            bool row_covered = (free_rows.order_of_key(x2 + 1) - free_rows.order_of_key(x1)) == 0;
            bool col_covered = (free_cols.order_of_key(y2 + 1) - free_cols.order_of_key(y1)) == 0;

            cout << (row_covered || col_covered ? "Yes" : "No") << '\n';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
