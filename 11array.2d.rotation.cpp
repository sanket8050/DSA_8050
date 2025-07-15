/*
================================================================================
TITLE: 2D Array 90 Degree Clockwise Rotation
================================================================================

DESCRIPTION:
This program demonstrates how to rotate a 2D array by 90 degrees clockwise.
The rotation is performed by reading the array column-wise from bottom to top
and row-wise from left to right.

LOGIC:
90 DEGREE CLOCKWISE ROTATION:
- Original: Read row-wise from top to bottom
- Rotated: Read column-wise from bottom to top
- This effectively rotates the matrix 90 degrees clockwise

ROTATION ALGORITHM:
1. For a 3x3 matrix, we need to read columns from right to left
2. For each column, read from bottom to top
3. This gives us the rotated matrix

MATRIX TRANSFORMATION:
Original Matrix:     Rotated Matrix:
[1 2 3]             [7 4 1]
[4 5 6]     →       [8 5 2]
[7 8 9]             [9 6 3]

READING PATTERN:
- Column 2: 7, 4, 1 (bottom to top)
- Column 1: 8, 5, 2 (bottom to top)
- Column 0: 9, 6, 3 (bottom to top)

EXAMPLE:
Input: 3x3 matrix
[1 2 3]
[4 5 6]
[7 8 9]

Output: 90° clockwise rotation
[7 4 1]
[8 5 2]
[9 6 3]

ALTERNATIVE APPROACHES:
- Transpose + Reverse rows
- Use extra matrix for result
- In-place rotation (more complex)

TIME COMPLEXITY: O(n²) where n is matrix dimension
SPACE COMPLEXITY: O(1) - printing directly

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    cout << "Original Matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\n90° Clockwise Rotation:" << endl;
    // Read columns from right to left, bottom to top
    for(int col = cols-1; col >= 0; col--){
        for(int row = 0; row < rows; row++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    cout << "\nAlternative: Reading bottom to top for each column" << endl;
    for(int col = cols-1; col >= 0; col--){
        for(int row = rows-1; row >= 0; row--){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
