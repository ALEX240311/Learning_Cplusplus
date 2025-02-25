#include <vector>
#include <iostream>
#include <utility> // Thêm thư viện để dùng std::pair
#include <algorithm> // Thêm thư viện để dùng sort

class Solution {
public:
    // Brute Force (O(n^2))
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

    // Two Pointer Method (O(n log n))
    std::vector<int> twoSum_1(std::vector<int>& arr, int target) {
        int n = arr.size();
        std::vector<std::pair<int, int>> nums;
        
        for (int i = 0; i < n; i++) {
            nums.push_back({arr[i], i});
        }
        
        std::sort(nums.begin(), nums.end()); // Sắp xếp theo giá trị
        
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = nums[left].first + nums[right].first;
            if (sum == target) {
                return {nums[left].second, nums[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return {};
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;
    
    // Test Brute Force
    std::vector<int> result1 = solution.twoSum(nums, target);
    if (!result1.empty()) {
        std::cout << "Brute Force: Indexes: " << result1[0] << ", " << result1[1] << std::endl;
    } else {
        std::cout << "No Solution Found (Brute Force)" << std::endl;
    }

    // Test Two Pointers
    std::vector<int> result2 = solution.twoSum_1(nums, target);
    if (!result2.empty()) {
        std::cout << "Two Pointers: Indexes: " << result2[0] << ", " << result2[1] << std::endl;
    } else {
        std::cout << "No Solution Found (Two Pointers)" << std::endl;
    }

    return 0;
}
