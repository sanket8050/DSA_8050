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
