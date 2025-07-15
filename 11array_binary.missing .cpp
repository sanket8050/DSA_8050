/*
================================================================================
TITLE: Find Missing Element in Sorted Array
================================================================================

DESCRIPTION:
This program finds the missing element in a sorted array containing numbers from 1 to n.
Two approaches are implemented:
1. Binary Search approach - O(log n) time complexity
2. Linear Search approach - O(n) time complexity

LOGIC:
BINARY SEARCH APPROACH:
- Use binary search to find where the missing element should be
- If arr[mid] == mid + 1, missing element is on the right
- If arr[mid] != mid + 1, missing element is on the left or at mid
- Continue until low > high, then return low + 1

LINEAR SEARCH APPROACH:
- Check if each element matches its expected position (i+1)
- Return the first position where mismatch occurs
- If all elements match, return n+1 (last element missing)

EXAMPLE:
Input: [1, 2, 3, 5, 6, 7] (n=7)
Output: 4 (missing element)

PROCESS:
- Expected: [1, 2, 3, 4, 5, 6, 7]
- Actual:   [1, 2, 3, 5, 6, 7]
- Missing: 4

EDGE CASES:
- First element missing: [2, 3, 4, 5]
- Last element missing: [1, 2, 3, 4]
- No element missing: [1, 2, 3, 4, 5]

TIME COMPLEXITY: 
- Binary Search: O(log n)
- Linear Search: O(n)

SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Binary Search approach
int missingBinarySearch(int n, vector<int>& arr){
    int low = 0;
    int high = arr.size() - 1;
    
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(arr[mid] == mid + 1){
            low = mid + 1;  // Missing element is on the right
        } else {
            high = mid - 1;  // Missing element is on the left
        }
    }
    return low + 1;  // Missing element
}

// Linear Search approach
int missingLinear(int n, vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != i + 1){
            return i + 1;  // Missing element
        }
    }
    return n;  // Last element is missing
}

int main(){
    int n;
    cout << "Enter the range (1 to n): ";
    cin >> n;
    
    vector<int> arr(n-1);
    cout << "Enter " << n-1 << " numbers (1 to " << n << " with one missing): ";
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    
    // Sort the array first
    sort(arr.begin(), arr.end());
    
    cout << "Sorted array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    // Find missing element using both approaches
    int missing1 = missingBinarySearch(n, arr);
    int missing2 = missingLinear(n, arr);
    
    cout << "Missing element (Binary Search): " << missing1 << endl;
    cout << "Missing element (Linear Search): " << missing2 << endl;
    
    // Test with example
    vector<int> test = {1, 2, 3, 5, 6, 7};
    cout << "\nTest case: [1, 2, 3, 5, 6, 7]" << endl;
    cout << "Missing element: " << missingBinarySearch(7, test) << endl;
}


int missing(const vector<int>&arr){
    int left = 0;
    int right = arr.size()-1;
    while(left <= right){
        int mid = left + (right-left)/2;

        if(arr[mid]==mid-1){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return left+1;
}