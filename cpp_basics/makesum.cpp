class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        // sum done

        for (int i = 0; i < nums.size(); i++) {
            int subtractSum = 0;
            int flag = i;
            for (int a = 0; a < j; a++) {
                if (flag + j < nums.size() - 1) {
                    subtractSum += nums[flag];
                    flag++;
                }
            }
            if ((sum - subtractSum) % p == 0) {
                // return j;
                break;
            }

            if (i == nums.size() - 1) {
                j++;
            }
        }
        return j;
    }
};