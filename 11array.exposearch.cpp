/*
================================================================================
TITLE: Exponential Search Algorithm
================================================================================

DESCRIPTION:
This program implements the exponential search algorithm to find an element
in a sorted array. It combines the efficiency of binary search with the
advantage of working on unbounded arrays.

LOGIC:
EXPONENTIAL SEARCH ALGORITHM:
1. Check if element is at first position
2. Find range by repeated doubling: i = 1, 2, 4, 8, 16, ...
3. Use binary search in the found range

ALGORITHM STEPS:
1. If arr[0] == x: return 0
2. Find range: while i < n && arr[i] <= x: i *= 2
3. Binary search in range [i/2, min(i, n-1)]

BINARY SEARCH FUNCTION:
- Standard binary search implementation
- Searches in given range [left, right]
- Returns index if found, -1 if not found

ADVANTAGES:
- Works on unbounded arrays
- Better than linear search for large arrays
- Time complexity: O(log n)
- Space complexity: O(1)

EXAMPLE:
Input: arr = [2,3,4,10,40,50,80,120,200,300], x = 10
Process:
1. Check arr[0] = 2 ≠ 10
2. Find range: i = 1, 2, 4, 8 (arr[8] = 200 > 10)
3. Binary search in range [4, 7]
4. Found at index 3

Output: "Element is present at index 3"

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include <iostream>
#include <algorithm> // for min function
using namespace std;

// Function to perform binary search on the sub-array
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;


        // If x greater, ignore left half
        if (arr[mid] < x)
            left = mid + 1;
        // If x is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If we reach here, the element was not present
    return -1;
}

// Function to perform exponential search
int exponentialSearch(int arr[], int n, int x) {
    // If x is present at first location itself
    if (arr[0] == x)
        return 0;

    // Find range for binary search by repeated doubling
    int i = 1;
    while (i < n && arr[i] <= x)
        i *= 2;

    // Call binary search for the found range
    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 80, 120, 200, 300};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = exponentialSearch(arr, n, x);

    if (result == -1)
        cout << "Element is not present in the array" << endl;
    else
        cout << "Element is present at index " << result << endl;

    return 0;
}

