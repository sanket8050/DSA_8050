/*
================================================================================
TITLE: Array Intersection - Find Common Elements
================================================================================

DESCRIPTION:
This program finds the intersection of two arrays, i.e., elements that are
common to both arrays. It uses nested loops to compare each element of the
first array with all elements of the second array.

LOGIC:
INTERSECTION ALGORITHM:
- Use nested loops to compare elements
- Outer loop: iterate through first array (arr)
- Inner loop: iterate through second array (brr)
- If elements match: add to result vector
- Continue until all elements are compared

ALGORITHM STEPS:
1. Initialize result vector ans
2. For each element in first array:
   - Compare with each element in second array
   - If match found: add to result vector
3. Print all common elements

EXAMPLE:
Input: arr = [1,3,2,4,5,6], brr = [1,3,6,9]
Output: [1,3,6]

PROCESS:
- 1 in arr: found in brr → add 1
- 3 in arr: found in brr → add 3
- 2 in arr: not found in brr → skip
- 4 in arr: not found in brr → skip
- 5 in arr: not found in brr → skip
- 6 in arr: found in brr → add 6

OPTIMIZATION OPPORTUNITIES:
- Sort both arrays and use two-pointer approach: O(n log n)
- Use hash set for O(n) time complexity
- Remove duplicates if needed

CURRENT COMPLEXITY:
- Time: O(n × m) where n, m are array sizes
- Space: O(min(n,m)) for result vector

EDGE CASES:
- Empty arrays: return empty result
- No common elements: return empty result
- Duplicate elements: current implementation includes duplicates

TIME COMPLEXITY: O(n × m) where n, m are array sizes
SPACE COMPLEXITY: O(min(n,m)) for result storage

================================================================================
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 3, 2, 4, 5, 6};
    vector<int> brr = {1, 3, 6, 9};
    vector<int> ans;
    
    cout << "Array 1: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    
    cout << "Array 2: ";
    for(int num : brr) cout << num << " ";
    cout << endl;
    
    // Find intersection
    for(int i = 0; i < arr.size(); i++){
        int element = arr[i];
        
        for(int j = 0; j < brr.size(); j++){
            if(element == brr[j]){
                ans.push_back(element);
                break;  // Found match, no need to check further
            }
        }
    }
    
    cout << "Intersection: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {3, 4, 5, 6};
    vector<int> result1;
    
    for(int i = 0; i < test1.size(); i++){
        for(int j = 0; j < test2.size(); j++){
            if(test1[i] == test2[j]){
                result1.push_back(test1[i]);
                break;
            }
        }
    }
    
    cout << "Test 1: ";
    for(int num : result1) cout << num << " ";
    cout << endl;
}

