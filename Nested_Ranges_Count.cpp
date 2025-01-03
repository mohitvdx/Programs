// submitted by Mohit Verma "mohitvdx"
// problem: 

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL); // fast IO

    int n;
    cin >> n;
    vector<pair<int, int>> ranges(n);
    for (int i = 0; i < n; i++) {
        cin >> ranges[i].first >> ranges[i].second;
    }

    vector<int> contains(n, 0), contained_by(n, 0);
    vector<int> BIT1(n + 1, 0), BIT2(n + 1, 0);

    // Coordinate compression
    vector<int> all_coords;
    for (auto [l, r] : ranges) {
        all_coords.push_back(l);
        all_coords.push_back(r);
    }
    sort(all_coords.begin(), all_coords.end());
    all_coords.erase(unique(all_coords.begin(), all_coords.end()), all_coords.end());

    auto get_compressed = [&](int val) {
        return lower_bound(all_coords.begin(), all_coords.end(), val) - all_coords.begin() + 1;
    };

    vector<tuple<int, int, int>> sorted_ranges;
    for (int i = 0; i < n; i++) {
        int l = get_compressed(ranges[i].first);
        int r = get_compressed(ranges[i].second);
        sorted_ranges.emplace_back(l, r, i);
    }

    sort(sorted_ranges.begin(), sorted_ranges.end(), [](auto &a, auto &b) {
        auto [l1, r1, i1] = a;
        auto [l2, r2, i2] = b;
        if (l1 == l2) return r1 > r2;
        return l1 < l2;
    });

    auto update = [](int idx, int value, vector<int>& BIT, int size) {
        for (; idx <= size; idx += idx & -idx) {
            BIT[idx] += value;
        }
    };

    auto query = [](int idx, vector<int>& BIT) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += BIT[idx];
        }
        return sum;
    };

    for (auto [l, r, idx] : sorted_ranges) {
        contains[idx] = query(r, BIT1);
        update(r, 1, BIT1, n * 2);
    }

    reverse(sorted_ranges.begin(), sorted_ranges.end());
    for (auto [l, r, idx] : sorted_ranges) {
        contained_by[idx] = query(r, BIT2);
        update(r, 1, BIT2, n * 2);
    }

    for (int x : contains) {
        cout << x << " ";
    }
    cout << "\n";
    for (int x : contained_by) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
