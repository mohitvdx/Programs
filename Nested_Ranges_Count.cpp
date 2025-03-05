// Mohit Verma "mohitvdx"
// problem: Count Containing and Contained Ranges

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct Range {
    int left, right, index;
};

// Sorting criteria for "contains" query
bool compareContains(const Range &r1, const Range &r2) {
    if (r1.left != r2.left) return r1.left < r2.left;
    return r1.right > r2.right; // Sort by decreasing right for same left
}

// Sorting criteria for "contained by" query
bool compareContainedBy(const pair<int, int> &p1, const pair<int, int> &p2) {
    if (p1.first != p2.first) return p1.first < p2.first;
    return p1.second > p2.second;
}

// Fenwick Tree (Binary Indexed Tree)
void update(int idx, vector<int> &bit, int n, int value) {
    for (; idx <= n; idx += idx & (-idx)) 
        bit[idx] += value;
}

int query(int idx, vector<int> &bit) {
    int sum = 0;
    for (; idx > 0; idx -= idx & (-idx)) 
        sum += bit[idx];
    return sum;
}

void solve() {
    int n;
    cin >> n;
    
    vector<Range> ranges(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        ranges[i] = {x, y, i};
    }

    // Sort for "contains" count
    sort(ranges.begin(), ranges.end(), compareContains);

    vector<pair<int, int>> opening(n), closing(n);
    for (int i = 0; i < n; i++) {
        opening[i] = {ranges[i].left, ranges[i].index};
        closing[i] = {ranges[i].right, i};
    }

    sort(closing.begin(), closing.end(), compareContainedBy);

    vector<int> contains(n, 0), containedBy(n, 0);
    vector<int> BIT1(n + 1, 0), BIT2(n + 1, 0);

    // Compute "contains" counts
    int i = 0, j = 0;
    while (i < n || j < n) {
        if (i < n && opening[i].first < closing[j].first) {
            update(i + 1, BIT1, n, 1);
            i++;
        } else {
            update(closing[j].second + 1, BIT1, n, -1);
            contains[opening[closing[j].second].second] = query(closing[j].second + 1, BIT1);
            j++;
        }
    }

    // Compute "contained by" counts
    i = 0, j = 0;
    while (i < n || j < n) {
        if (i < n && opening[i].first < closing[j].first) {
            i++;
        } else {
            containedBy[opening[closing[j].second].second] = query(closing[j].second + 1, BIT2);
            update(1, BIT2, n, 1);
            if (closing[j].second + 2 <= n)
                update(closing[j].second + 2, BIT2, n, -1);
            j++;
        }
    }

    // Print results
    for (int x : containedBy) cout << x << " ";
    cout << "\n";
    for (int x : contains) cout << x << " ";
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); // fast IO
    solve();
}

/*
   - Uses Fenwick Tree (BIT) for efficient range count queries.
   - Sorted by left (asc) and right (desc) for containment calculation.
   - Processed efficiently using BIT with O(n log n) complexity.
*/
