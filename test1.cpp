class Solution {
public:
    bool canPartition(vector<int>& nums, vector<bool>& used, int target, int k, int index, int currentSum) {
        if (k == 1) return true; // Only one group left means all are valid
        
        if (currentSum == target) {
            return canPartition(nums, used, target, k - 1, 0, 0); // Move to next subset
        }

        for (int i = index; i < nums.size(); i++) {
            if (!used[i] && currentSum + nums[i] <= target) { // Try to include nums[i]
                used[i] = true;
                if (canPartition(nums, used, target, k, i + 1, currentSum + nums[i])) {
                    return true;
                }
                used[i] = false; // Backtrack
            }
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % k != 0) return false; // Must be divisible
        
        int target = sum / k;
        vector<bool> used(nums.size(), false);
        sort(nums.rbegin(), nums.rend()); // Optimization: Try larger numbers first
        
        return canPartition(nums, used, target, k, 0, 0);
    }
};
