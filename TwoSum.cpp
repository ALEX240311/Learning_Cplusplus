#include <vector>
#include <iostream>


// This is Brute Force Method  : It took more time to execute
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }


    std::vector<int> twoSum_1(std::vector<int>& nums, int target)
    {
        
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    std::vector<int> result = solution.twoSum(nums, target); 

    if (!result.empty()) {
        std::cout << "Indexes: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No Solution Found" << std::endl;
    }

    return 0;
}
