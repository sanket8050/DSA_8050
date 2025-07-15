/*
================================================================================
TITLE: Find Unique Element in Sorted Array with Pairs
================================================================================

DESCRIPTION:
This program finds the unique element in a sorted array where all elements
appear in pairs except one. It uses binary search with index-based logic
to efficiently locate the single element.

LOGIC:
UNIQUE ELEMENT ALGORITHM:
- Array is sorted with all elements in pairs except one
- Use binary search with index-based classification
- Even indices should have pairs: arr[i] == arr[i+1]
- Odd indices should have pairs: arr[i] == arr[i-1]
- When this pattern breaks, we've found the unique element

ALGORITHM STEPS:
1. Initialize start = 0, end = size-1
2. While start <= end:
   - Calculate mid = start + (end-start)/2
   - If start == end: return start (single element)
   - If mid is even:
     * If arr[mid] == arr[mid+1]: unique is on right (start = mid+2)
     * Else: unique is on left or at mid (end = mid)
   - If mid is odd:
     * If arr[mid] == arr[mid-1]: unique is on right (start = mid+1)
     * Else: unique is on left (end = mid-1)
3. Return the unique element index

EXAMPLE:
Input: [1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9,9]
Output: 6 (index 10)

PROCESS:
- mid = 8 (even), arr[8] = 5, arr[9] = 5 → equal, search right
- mid = 12 (even), arr[12] = 7, arr[13] = 7 → equal, search right
- mid = 14 (even), arr[14] = 8, arr[15] = 8 → equal, search right
- mid = 16 (even), arr[16] = 9, arr[17] = 9 → equal, search right
- start = end = 18, return 18

PATTERN ANALYSIS:
- Even indices: should match with next element
- Odd indices: should match with previous element
- When this pattern breaks, we've found the unique element

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        // If there is only one element in array
        if(start == end){
            return arr[start];
        }
        
        // Classify according to mid is at even index or odd
        if(mid % 2 == 0){
            // For even index
            if(arr[mid] == arr[mid + 1]){
                start = mid + 2;  // Unique element is on right
            } else {
                end = mid;  // Unique element is on left or at mid
            }
        } else {
            // For odd index
            if(arr[mid] == arr[mid - 1]){
                start = mid + 1;  // Unique element is on right
            } else {
                end = mid - 1;  // Unique element is on left
            }
        }
    }
    return -1;  // No unique element found
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9,9};
    
    cout << "Array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    int uniqueIndex = findUniqueElement(arr);
    
    if(uniqueIndex != -1){
        cout << "Unique element: " << arr[uniqueIndex] << " at index: " << uniqueIndex << endl;
    } else {
        cout << "No unique element found" << endl;
    }
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {1,1,2,3,3,4,4,5,5};
    cout << "Test 1: ";
    for(int num : test1) cout << num << " ";
    cout << "→ Unique: " << test1[findUniqueElement(test1)] << endl;
    
    vector<int> test2 = {1,2,2,3,3,4,4,5,5};
    cout << "Test 2: ";
    for(int num : test2) cout << num << " ";
    cout << "→ Unique: " << test2[findUniqueElement(test2)] << endl;
}
