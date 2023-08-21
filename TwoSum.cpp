#include <vector>

class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                sum = nums[i];
                if (nums[j] == target - sum) {
                    return {i, j};
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
    }
};
