/*
================================================================================
TITLE: Pair Sum - Find Pairs that Sum to Target
================================================================================

DESCRIPTION:
This program finds all pairs of elements in an array that sum to a given target value.
It uses nested loops to check all possible pairs and prints those that match the target sum.

LOGIC:
PAIR SUM ALGORITHM:
- Use nested loops to check all possible pairs
- Outer loop: iterate through each element
- Inner loop: iterate through remaining elements (i+1 to end)
- Check if current pair sums to target
- Print matching pairs

ALGORITHM STEPS:
1. For each element at index i:
   - For each element at index j (j > i):
     * Check if arr[i] + arr[j] == target
     * If true: print the pair
2. Continue until all pairs are checked

EXAMPLE:
Input: arr = [1,2,3,4,5], target = 5
Output:
1:4
2:3

PROCESS:
- i=0, element=1: check with 2,3,4,5 → 1+4=5 ✓
- i=1, element=2: check with 3,4,5 → 2+3=5 ✓
- i=2, element=3: check with 4,5 → no match
- i=3, element=4: check with 5 → no match
- i=4, element=5: no more elements to check

OPTIMIZATION OPPORTUNITIES:
- Sort array and use two-pointer approach: O(n log n)
- Use hash map for O(n) time complexity
- Avoid duplicate pairs if needed

CURRENT COMPLEXITY:
- Time: O(n²) where n is array size
- Space: O(1) - only printing pairs

EDGE CASES:
- Empty array: no pairs found
- Single element: no pairs possible
- No matching pairs: no output
- Duplicate elements: all pairs printed

TIME COMPLEXITY: O(n²) where n is array size
SPACE COMPLEXITY: O(1) - only using variables

================================================================================
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int target = 5;
    int size = 5;
    
    cout << "Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Target sum: " << target << endl;
    
    cout << "Pairs that sum to " << target << ":" << endl;
    
    // Find pairs that sum to target
    for(int i = 0; i < size; i++){
        int element = arr[i];
        
        for(int j = i + 1; j < size; j++){
            if(element + arr[j] == target){
                cout << element << ":" << arr[j] << endl;
            }
        }
    }
    
    // Test with different target
    cout << "\nTest with target = 6:" << endl;
    target = 6;
    for(int i = 0; i < size; i++){
        int element = arr[i];
        
        for(int j = i + 1; j < size; j++){
            if(element + arr[j] == target){
                cout << element << ":" << arr[j] << endl;
            }
        }
    }
    
    // Test with vector
    cout << "\nUsing vector:" << endl;
    vector<int> vec = {1, 2, 3, 4, 5};
    target = 5;
    
    for(int i = 0; i < vec.size(); i++){
        for(int j = i + 1; j < vec.size(); j++){
            if(vec[i] + vec[j] == target){
                cout << vec[i] << ":" << vec[j] << endl;
            }
            
        }
    }
}



int pairsum(const vector<int>arr,int target){
    unordered_map<int,int>map;

    for(int x : arr){
        int comp = target - arr[x];
        if(map.find(comp)!=map.end()){
            cout<<"{"<<map[comp]<<","<<arr[x]<<"}";
        }
        map[arr[x]] = x;
    }
    return {};
}