/*
================================================================================
TITLE: 3 Sum Problem - Find All Unique Triplets
================================================================================

DESCRIPTION:
This program solves the classic 3 Sum problem: find all unique triplets in an array
that sum to zero. It uses a two-pointer approach with sorting to avoid duplicates.

LOGIC:
3 SUM ALGORITHM:
1. Sort the array to enable two-pointer technique
2. Fix one element (nums[i]) and use two pointers for remaining elements
3. Use left pointer (i+1) and right pointer (end of array)
4. Calculate sum = nums[i] + nums[left] + nums[right]
5. If sum == 0: add triplet to result and skip duplicates
6. If sum < 0: move left pointer right
7. If sum > 0: move right pointer left

DUPLICATE AVOIDANCE:
- Skip duplicate nums[i]: if i > 0 && nums[i] == nums[i-1]
- Skip duplicate nums[left]: while left < right && nums[left] == nums[left+1]
- Skip duplicate nums[right]: while left < right && nums[right] == nums[right-1]

ALGORITHM STEPS:
1. Sort array in ascending order
2. For each element nums[i]:
   - Skip if it's a duplicate of previous element
   - Use two pointers (left, right) to find pairs
   - If sum == 0: add triplet and skip duplicates 
   - If sum < 0: left++
   - If sum > 0: right--

EXAMPLE:
Input: [-1, 0, 1, 2, -1, -4]
Sorted: [-4, -1, -1, 0, 1, 2]
Output:
-1 -1 2
-1 0 1

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1) excluding result array

================================================================================
*/

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

class Solution {
    
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left+1]) left++;
                    while (left < right && nums[right] == nums[right-1]) right--;
                    left++; right--; 
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = sol.threeSum(nums);

    for (const auto& triplet : res) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}