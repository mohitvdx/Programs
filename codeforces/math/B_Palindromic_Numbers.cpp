// Mohit Verma "mohitvdx"
// problem:

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string string_diff(string palindrome, string num) {
    string ans = "";
    int n = num.size(); // Use `num` size, as `palindrome` may have an extra digit.

    int carry = 0;
    for (int i = n - 1; i >= 0; i--) {
        int p_digit = palindrome[i + (palindrome.size() - num.size())] - '0'; // Adjust for leading digits in `palindrome`.
        int n_digit = num[i] - '0';
        
        int dig = p_digit - n_digit - carry;
        if (dig < 0) {
            dig += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        ans += to_string(dig);
    }

    // Add any remaining leading digits from `palindrome` (if `num` starts with a smaller number).
    for (int i = palindrome.size() - num.size() - 1; i >= 0; i--) {
        int p_digit = palindrome[i] - '0';
        int dig = p_digit - carry;
        if (dig < 0) {
            dig += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        ans += to_string(dig);
    }

    reverse(ans.begin(), ans.end());

    // Remove leading zeros
    int start = 0;
    while (start < ans.size() && ans[start] == '0') {
        start++;
    }
    ans = ans.substr(start);
    
    return ans.empty() ? "0" : ans; // Ensure "0" is returned for zero results.
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string num;
        cin >> num;

        string palindrome = "";
        string ans = "";

        if (num[0] != '9') {
            for (int i = 0; i < n; i++) {
                palindrome += "9";
            }
        } else {
            for (int i = 0; i <= n; i++) {
                palindrome += "1";
            }
        }

        ans = string_diff(palindrome, num); //this is the string difference code, and also contain leading zero removal
        cout << ans << '\n';
    }
}

/* 
intuition for this code is that if the number is starting with any digit other than 9, then try to make it a 99..99 <same number of times as the length of the given number>
and if 
the number is starting with 9, then the palindrome we consider is 11..11 <length of the given numeber +1 times>
*/