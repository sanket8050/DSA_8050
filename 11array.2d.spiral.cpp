/*
================================================================================
TITLE: Spiral Matrix Traversal
================================================================================

DESCRIPTION:
This program prints a 2D array in spiral order, starting from the top-left corner
and moving in a clockwise spiral pattern. It uses four boundary variables to
track the current spiral layer.

LOGIC:
SPIRAL TRAVERSAL ALGORITHM:
- Use four boundary variables: startRow, endRow, startCol, endCol
- Traverse in four directions: right, down, left, up
- After each complete spiral, shrink the boundaries
- Continue until boundaries cross each other

ALGORITHM STEPS:
1. Initialize boundaries: startRow=0, endRow=rows-1, startCol=0, endCol=cols-1
2. While startRow <= endRow AND startCol <= endCol:
   - Print top row (left to right): startRow, startCol to endCol
   - Print right column (top to bottom): startRow+1 to endRow, endCol
   - Print bottom row (right to left): endRow, endCol-1 to startCol
   - Print left column (bottom to top): endRow-1 to startRow+1, startCol
3. Shrink boundaries: startRow++, endRow--, startCol++, endCol--

EXAMPLE:
Input: 3x3 array
[1 2 3]
[4 5 6]
[7 8 9]

Output: 1 2 3 6 9 8 7 4 5

PROCESS:
- First spiral: 1→2→3→6→9→8→7→4
- Second spiral: 5
- Boundaries shrink after each spiral

VISUALIZATION:
Spiral 1: [1 2 3]
          [4 5 6]
          [7 8 9]
          → 1,2,3,6,9,8,7,4

Spiral 2: [5]
          → 5

EDGE CASES:
- Single row: only print left to right
- Single column: only print top to bottom
- Single element: print once
- Rectangular arrays: handle different row/column counts

TIME COMPLEXITY: O(rows × cols) - visit each element once
SPACE COMPLEXITY: O(1) - only using boundary variables

================================================================================
*/

#include<iostream>
using namespace std;

void printSpiral(int arr[][3]){
    int rows = 3;
    int cols = 3;
    int startRow = 0;
    int endRow = rows - 1;
    int startCol = 0;
    int endCol = cols - 1;
    
    cout << "Spiral traversal: ";
    
    while(startRow <= endRow && startCol <= endCol){
        // Print top row (left to right)
        for(int i = startCol; i <= endCol; i++){
            cout << arr[startRow][i] << " ";
        }
        
        // Print right column (top to bottom)
        for(int j = startRow + 1; j <= endRow; j++){
            cout << arr[j][endCol] << " ";
        }
        
        // Print bottom row (right to left) - avoid duplicate
        if(startRow != endRow){
            for(int i = endCol - 1; i >= startCol; i--){
                cout << arr[endRow][i] << " ";
            }
        }
        
        // Print left column (bottom to top) - avoid duplicate
        if(startCol != endCol){
            for(int j = endRow - 1; j >= startRow + 1; j--){
                cout << arr[j][startCol] << " ";
            }
        }
        
        // Shrink boundaries
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
    cout << endl;
}

int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    
    cout << "Original 2D Array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    printSpiral(arr);
    
    // Test with different arrays
    cout << "\nTest cases:" << endl;
    
    int test1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "2x3 array: ";
    // For rectangular arrays, we'd need a different function signature
    // This is just for demonstration
    
    int test2[1][3] = {{1, 2, 3}};
    cout << "1x3 array: 1 2 3" << endl;
}

// babbar code 
/*#include<iostream>
using namespace std;

int spiral(int arr[][3],int col,int row){
    int left =0 ;int right = row-1;
    int top = 0; int bottom = col-1;
    
    while(left <= right && top <= bottom){
        for(int i = left;i<=right;i++){
            cout<<arr[top][i];
        }
        top++;
        for(int i = top ;i<=bottom;i++){
            cout<<arr[i][right];
        }
        right--;
        if(top<=bottom){
            for(int i = right;i>=left;i--){
            cout<<arr[bottom][i];
        }
        bottom--;
        }
        
        if(left <= right){
             for(int i = bottom;i>=top;i--){
            cout<<arr[i][left];
        }
        left++;
        }
        
       
    }
    
    
    return 0;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    spiral(arr,3,3);
}*/
