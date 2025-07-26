/*
================================================================================
TITLE: 2D Array Operations and Visualization
================================================================================

DESCRIPTION:
This program demonstrates basic operations on 2D arrays including initialization,
accessing elements, and printing the array in a formatted way. It shows how
2D arrays are stored in memory and how to work with them.

LOGIC:
2D ARRAY CONCEPTS:
- 2D array is an array of arrays
- arr[i][j] represents element at row i, column j
- Memory is allocated in row-major order
- Can be visualized as a matrix

ARRAY INITIALIZATION:
- Static initialization: int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}
- Dynamic initialization: using nested loops
- Zero initialization: int arr[3][3] = {0}

ACCESSING ELEMENTS:
- arr[row][column] - access specific element
- arr[0][0] - top-left element
- arr[rows-1][cols-1] - bottom-right element

PRINTING 2D ARRAY:
- Use nested loops
- Outer loop: rows
- Inner loop: columns
- Add newline after each row

EXAMPLE:
Input: 3x3 array
[1 2 3]
[4 5 6]
[7 8 9]

Output: Formatted display of the array

MEMORY LAYOUT:
- Elements stored in contiguous memory
- Row-major order: [1,2,3,4,5,6,7,8,9]
- arr[i][j] = base_address + i * cols + j

TIME COMPLEXITY:
- Access: O(1)
- Traversal: O(rows × cols)
- Initialization: O(rows × cols)

SPACE COMPLEXITY: O(rows × cols)

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
// Method 1: Static initialization with visualization
    int arr[3][3] = {{1, 2, 3},    // Row 0
                     {4, 5, 6},    // Row 1
                     {7, 8, 9}};   // Row 2
    
    cout << "2D Array (3x3):" << endl;
    
    // Print the array in matrix format
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;  // New line after each row
    }
    
    // Access specific elements
    cout << "\nAccessing specific elements:" << endl;
    cout << "arr[0][0] = " << arr[0][0] << endl;  // Top-left
    cout << "arr[1][1] = " << arr[1][1] << endl;  // Center
    cout << "arr[2][2] = " << arr[2][2] << endl;  // Bottom-right
    
    // Method 2: Dynamic initialization
    cout << "\nDynamic 2D Array:" << endl;
    int rows = 4, cols = 4;
    int dynamicArr[4][4];
    
    // Initialize with values
    int value = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            dynamicArr[i][j] = value++;
        }
    }
    
    // Print dynamic array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << dynamicArr[i][j] << "\t";  // Tab for better spacing
        }
        cout << endl;
    }
    
    // Demonstrate array traversal patterns
    cout << "\nRow-wise traversal:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    
    cout << "Column-wise traversal:" << endl;
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}
