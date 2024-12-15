#include <string>
#include <climits>

class Solution {
public:
    int myAtoi(std::string s) {
        int n = s.size();
        int i = 0;
        long long result = 0;
        int sign = 1;

        // Step 1: Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for optional sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert digits to integer
        while (i < n && std::isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Step 4: Handle overflow
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        return static_cast<int>(result * sign);
    }
};
