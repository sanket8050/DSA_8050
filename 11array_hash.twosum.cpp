/*
================================================================================
TITLE: Two Sum Problem - Multiple Approaches
================================================================================

DESCRIPTION:
This program solves the classic "Two Sum" problem: find two numbers in an array
that add up to a target value. It implements both brute force and optimized
hash map approaches.

PROBLEM STATEMENT:
Given an array of integers nums and an integer target, return indices of the two
numbers such that they add up to target. You may assume that each input would
have exactly one solution.

LOGIC:
BRUTE FORCE APPROACH (O(n²)):
- Use nested loops to check all possible pairs
- Outer loop picks first element
- Inner loop checks all remaining elements
- Return indices when sum equals target

HASH MAP APPROACH (O(n)):
- Use unordered_map to store numbers and their indices
- For each number, calculate complement = target - current_number
- If complement exists in map, return both indices
- Otherwise, store current number and its index

ALGORITHM STEPS (Hash Map):
1. Initialize empty hash map
2. For each element nums[i]:
   - Calculate complement = target - nums[i]
   - If complement exists in map: return [map[complement], i]
   - Else: store nums[i] → i in map
3. Return empty vector if no solution

EXAMPLE:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1] (2 + 7 = 9)

TIME COMPLEXITY:
- Brute Force: O(n²)
- Hash Map: O(n)

SPACE COMPLEXITY:
- Brute Force: O(1)
- Hash Map: O(n)

================================================================================
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Brute force approach (O(n²))
vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {  // Outer loop to pick an element
        for (int j = i + 1; j < n; j++) {  // Inner loop to check pairs
            if (nums[i] + nums[j] == target) {
                return {i, j};  // Return indices of the two numbers
            }
        }
    }
    return {};  // Return empty vector if no pair is found
}

// Optimized approach using Hash Map (O(n))
vector<int> twoSumOptimized(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  // Hash map to store numbers and their indices
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {  // Check if complement exists
            return {mp[complement], i};  // Return indices of complement and current number
        }
        mp[nums[i]] = i;  // Store current number in the hash map
    }
    return {};  // Return empty vector if no solution exists
}

int main() {
    vector<int> nums = {2, 7, 11, 15};  // Example input
    int target = 9;

    // Brute Force Solution
    vector<int> resultBrute = twoSumBruteForce(nums, target);
    cout << "Brute Force Solution: ";
    if (!resultBrute.empty()) {
        cout << "[" << resultBrute[0] << ", " << resultBrute[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    // Optimized Solution
    vector<int> resultOptimized = twoSumOptimized(nums, target);
    cout << "Optimized Solution: ";
    if (!resultOptimized.empty()) {
        cout << "[" << resultOptimized[0] << ", " << resultOptimized[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}


int funct(vector<int>arr,int target){
    unordered_map<int,int>map;
    
    for(int i =0 ;i<arr.size();i++){
        int more = target - arr[i];
        if(arr.find(more) !=arr.end() ){
            return {arr[more]}
        }
    }
}