/*
================================================================================
TITLE: Trapping Rain Water Problem
================================================================================

DESCRIPTION:
This program solves the "Trapping Rain Water" problem using the two-pointer approach.
Given an array representing heights of bars, it calculates how much water can be
trapped between the bars after rain.

LOGIC:
TWO-POINTER APPROACH:
- Use left and right pointers starting from both ends
- Track maximum heights from left and right sides
- Water trapped at any position = min(left_max, right_max) - height[i]
- Move pointer from the side with smaller maximum

ALGORITHM STEPS:
1. Initialize left=0, right=size-1
2. Initialize left_max=0, right_max=0, total_water=0
3. While left < right:
   - If arr[left] < arr[right]:
     * Update left_max = max(left_max, arr[left])
     * Add water: left_max - arr[left]
     * Move left pointer right
   - Else:
     * Update right_max = max(right_max, arr[right])
     * Add water: right_max - arr[right]
     * Move right pointer left
4. Return total water trapped

EXAMPLE:
Input: [3,2,1,0,1,2,3]
Output: 9

VISUALIZATION:
     █
█    █
█ █  █
█ █ ██
█ █ ██
█ █ ██
█ █ ██
3 2 1 0 1 2 3

Water trapped at each position:
- Index 1: min(3,3) - 2 = 1
- Index 2: min(3,3) - 1 = 2
- Index 3: min(3,3) - 0 = 3
- Index 4: min(3,3) - 1 = 2
- Index 5: min(3,3) - 2 = 1
Total: 1 + 2 + 3 + 2 + 1 = 9

KEY INSIGHT:
- Water trapped depends on the minimum of maximum heights on both sides
- We can determine this without knowing the other side's maximum
- Move from the side with smaller current maximum

TIME COMPLEXITY: O(n) where n is array size
SPACE COMPLEXITY: O(1) - only using variables

================================================================================
*/

#include<iostream>
#include<vector>
using namespace std;

int trappedWater(vector<int>& arr){
    int left = 0;
    int right = arr.size() - 1;
    int left_max = 0;
    int right_max = 0;
    int total_water = 0;
    
    while(left < right){
        if(arr[left] < arr[right]){
            left_max = max(left_max, arr[left]);
            total_water += left_max - arr[left];
            left++;
        } else {
            right_max = max(right_max, arr[right]);
            total_water += right_max - arr[right];
            right--;
        }
    }
    return total_water;
}

int main(){
    vector<int> arr = {3, 2, 1, 0, 1, 2, 3};
    
    cout << "Height array: ";
    for(int height : arr){
        cout << height << " ";
    }
    cout << endl;
    
    int water = trappedWater(arr);
    cout << "Trapped water: " << water << endl;
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Test 1: ";
    for(int height : test1) cout << height << " ";
    cout << "→ Water: " << trappedWater(test1) << endl;
    
    vector<int> test2 = {1,0,8,0,6,0,2,0,5,0,4,0,8,0,3,0,7};
    cout << "Test 2: ";
    for(int height : test2) cout << height << " ";
    cout << "→ Waterxxx: " << trappedWater(test2) << endl;
} 
