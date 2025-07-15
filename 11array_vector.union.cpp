/*
================================================================================
TITLE: Array Union - Combine Elements from Two Arrays
================================================================================

DESCRIPTION:
This program finds the union of two arrays by combining all elements from both
arrays into a single result. It demonstrates basic array merging operations
using vectors.

LOGIC:
ARRAY UNION ALGORITHM:
- Create a result vector to store combined elements
- Add all elements from first array to result
- Add all elements from second array to result
- Print the combined result

ALGORITHM STEPS:
1. Initialize empty result vector
2. Copy all elements from first array to result
3. Copy all elements from second array to result
4. Print the union result

EXAMPLE:
Input: arr = [2,3,4], brr = [4,6,8,0]
Output: [2,3,4,4,6,8,0]

PROCESS:
- Add elements from arr: [2,3,4]
- Add elements from brr: [2,3,4,4,6,8,0]
- Final union: [2,3,4,4,6,8,0]

IMPORTANT NOTES:
- This is a simple union (not mathematical set union)
- Duplicate elements are preserved
- Order is maintained (first array, then second array)
- For mathematical union, duplicates would be removed

OPTIMIZATION OPPORTUNITIES:
- Remove duplicates for mathematical union
- Sort result for ordered union
- Use hash set for efficient duplicate removal
- Handle different data types

CURRENT COMPLEXITY:
- Time: O(n + m) where n, m are array sizes
- Space: O(n + m) for result storage

EDGE CASES:
- Empty arrays: return empty result
- Single element arrays: simple concatenation
- Arrays with duplicates: all elements included

TIME COMPLEXITY: O(n + m) where n, m are array sizes
SPACE COMPLEXITY: O(n + m) for result storage

================================================================================
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2, 3, 4};
    int sizea = 3;
    int brr[] = {4, 6, 8, 0};
    int sizeb = 4;
    
    cout << "Array 1: ";
    for(int i = 0; i < sizea; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Array 2: ";
    for(int i = 0; i < sizeb; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
    
    vector<int> ans;
    
    // Add elements from first array
    for(int i = 0; i < sizea; i++){
        ans.push_back(arr[i]);
    }
    
    // Add elements from second array
    for(int i = 0; i < sizeb; i++){
        ans.push_back(brr[i]);
    }
    
    cout << "Union: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {3, 4, 5};
    vector<int> result;
    
    // Add elements from test1
    for(int num : test1){
        result.push_back(num);
    }
    
    // Add elements from test2
    for(int num : test2){
        result.push_back(num);
    }
    
    cout << "Test union: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
