/*
================================================================================
TITLE: Vector Sorting and Binary Array Segregation
================================================================================

DESCRIPTION:
This program demonstrates two approaches for sorting a binary array (containing
only 0s and 1s): using STL sort function and using the Dutch National Flag
algorithm for efficient segregation.

LOGIC:
TWO APPROACHES:

1. STL SORT APPROACH:
   - Use sort(arr.begin(), arr.end())
   - Simple and efficient for any array
   - Time complexity: O(n log n)

2. DUTCH NATIONAL FLAG ALGORITHM (commented):
   - Use three pointers: start, i, end
   - start: beginning of array
   - i: current element
   - end: end of array
   - Move 0s to left, 1s to right
   - Time complexity: O(n)

ALGORITHM STEPS (Dutch National Flag):
1. Initialize start = 0, i = 0, end = size-1
2. While i <= end:
   - If arr[i] == 0: swap with arr[start], increment both
   - If arr[i] == 1: increment i
   - If arr[i] == 2: swap with arr[end], decrement end

EXAMPLE:
Input: [0,1,0,1,1,1,0,0,1,1,0,1]
Output: [0,0,0,0,0,1,1,1,1,1,1,1]

PROCESS (STL Sort):
- Original: [0,1,0,1,1,1,0,0,1,1,0,1]
- After sort: [0,0,0,0,0,1,1,1,1,1,1,1]

PROCESS (Dutch National Flag):
- Move all 0s to left side
- Move all 1s to right side
- Result: segregated array

ADVANTAGES:
- STL Sort: Simple, works for any data type
- Dutch National Flag: Efficient for binary arrays, O(n) time

TIME COMPLEXITY:
- STL Sort: O(n log n)
- Dutch National Flag: O(n)

SPACE COMPLEXITY: O(1) - in-place sorting

================================================================================
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Dutch National Flag Algorithm for binary array segregation
void segregateBinaryArray(vector<int>& arr){
    int start = 0;
    int i = 0;
    int end = arr.size() - 1;
    
    while(i <= end){
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            i++;
            start++;
        } else {
            swap(arr[i], arr[end]);
            end--;
        }
    }
}

int main(){
    vector<int> arr = {0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1};
    
    cout << "Original array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    // Method 1: Using STL sort
    vector<int> arr1 = arr;  // Copy for comparison
    sort(arr1.begin(), arr1.end());
    
    cout << "After STL sort: ";
    for(int num : arr1){
        cout << num << " ";
    }
    cout << endl;
    
    // Method 2: Using Dutch National Flag Algorithm
    vector<int> arr2 = arr;  // Copy for comparison
    segregateBinaryArray(arr2);
    
    cout << "After segregation: ";
    for(int num : arr2){
        cout << num << " ";
    }
    cout << endl;
    
    // Test with different binary arrays
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {1, 0, 1, 0, 1, 0};
    cout << "Test 1: ";
    for(int num : test1) cout << num << " ";
    segregateBinaryArray(test1);
    cout << " → ";
    for(int num : test1) cout << num << " ";
    cout << endl;
    
    vector<int> test2 = {1, 1, 1, 0, 0, 0};
    cout << "Test 2: ";
    for(int num : test2) cout << num << " ";
    segregateBinaryArray(test2);
    cout << " → ";
    for(int num : test2) cout << num << " ";
    cout << endl;
}
