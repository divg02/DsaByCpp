#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty())
            return 0;

        int index = 0;
        for (int i = 1; i < nums.size(); ) {
            if (nums[i] != nums[index]) {
                index++;
                nums[index] = nums[i];
            }
            i++;
        }

        return index + 1;
    }
};
