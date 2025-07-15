/*
================================================================================
TITLE: Diagonal Sum of 2D Array
================================================================================

DESCRIPTION:
This program calculates the sum of both diagonals (primary and secondary) of a
2D array. It handles both even and odd-sized arrays correctly, avoiding double
counting of the center element in odd-sized arrays.

LOGIC:
DIAGONAL SUMS:
- Primary diagonal: arr[i][i] where i goes from 0 to n-1
- Secondary diagonal: arr[i][n-1-i] where i goes from 0 to n-1
- For odd-sized arrays: center element is common to both diagonals

ALGORITHM STEPS:
1. Initialize sum = 0
2. For each row i from 0 to n-1:
   - Add primary diagonal element: arr[i][i]
   - Add secondary diagonal element: arr[i][n-1-i] (if not center)
3. Return total sum

EXAMPLE:
Input: 3x3 array
[1 2 3]
[4 5 6]
[7 8 9]

Primary diagonal: 1 + 5 + 9 = 15
Secondary diagonal: 3 + 5 + 7 = 15
Total sum: 15 + 15 = 30

PROCESS:
- i=0: sum += arr[0][0] + arr[0][2] = 1 + 3 = 4
- i=1: sum += arr[1][1] + arr[1][1] = 5 + 5 = 14 (center counted once)
- i=2: sum += arr[2][2] + arr[2][0] = 9 + 7 = 30

EDGE CASES:
- Odd-sized arrays: center element counted only once
- Even-sized arrays: no common element
- 1x1 array: single element

VISUALIZATION:
Primary diagonal (\): [1, 5, 9]
Secondary diagonal (/): [3, 5, 7]
Center element (5): counted only once

TIME COMPLEXITY: O(n) where n is array size
SPACE COMPLEXITY: O(1) - only using variables

================================================================================
*/

#include<iostream>
using namespace std;

int diagonalSum(int arr[][3]){
    int sum = 0;
    int n = 3;  // Size of array n*n
    
    for(int i = 0; i < n; i++){
        // Add primary diagonal element
        sum = sum + arr[i][i];
        
        // Add secondary diagonal element (avoid double counting center)
        if(i != n - 1 - i){
            sum = sum + arr[i][n - 1 - i];
        }
    }
    return sum;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << "2D Array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int sum = diagonalSum(arr);
    cout << "\nDiagonal sum: " << sum << endl;
    
    // Show the diagonals
    cout << "\nPrimary diagonal: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i][i] << " ";
    }
    cout << endl;
    
    cout << "Secondary diagonal: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i][2-i] << " ";
    }
    cout << endl;
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    int test1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    cout << "Test 1 (all 1s): " << diagonalSum(test1) << endl;
    
    int test2[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << "Test 2 (identity matrix): " << diagonalSum(test2) << endl;
}
