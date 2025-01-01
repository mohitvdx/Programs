// submitted by Mohit Verma "mohitvdx"
// problem: F. You Are So Beautiful

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); // fast IO

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        // Track first and last occurrences
        set<int> first_indices;
        set<int> last_indices;
        map<int, int> last_seen;

        for (int i = 0; i < n; i++) {
            if (last_seen.find(arr[i]) == last_seen.end()) {
                first_indices.insert(i); // Record the first occurrence
            }
            last_seen[arr[i]] = i; // Always update the last occurrence
        }

        for (const auto& [value, index] : last_seen) {
            last_indices.insert(index); // Add to the set of last occurrences
        }

        // Calculate the result
        int ans = 0;
        int count_last = 0;

        // Traverse the array in reverse
        for (int i = n - 1; i >= 0; i--) {
            if (last_indices.count(i)) {
                count_last++; // Increment when encountering a last occurrence
            }
            if (first_indices.count(i)) {
                ans += count_last; // Add the count of valid ending points
            }
        }

        cout << ans << '\n'; // Output the result for this test case
    }
    return 0;
}
