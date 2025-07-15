/*
================================================================================
TITLE: 2D Array Search Algorithms
================================================================================

DESCRIPTION:
This program demonstrates multiple approaches to search for an element in a 2D array:
1. Linear Search (O(n²)) - check every element
2. Staircase Search (O(n)) - for sorted arrays
3. Binary Search (O(log n)) - for sorted arrays
4. Min/Max finding in 2D arrays
5. Vector of vectors declaration

LOGIC:
SEARCH ALGORITHMS:

1. LINEAR SEARCH:
   - Check every element using nested loops
   - Works on any array (sorted or unsorted)
   - Time complexity: O(rows × cols)

2. STAIRCASE SEARCH:
   - Start from top-right corner
   - If key < current: move left
   - If key > current: move down
   - Works only on sorted arrays
   - Time complexity: O(rows + cols)

3. BINARY SEARCH:
   - Treat 2D array as 1D array
   - Convert mid index to row and column
   - rowIndex = mid / cols, colIndex = mid % cols
   - Works only on sorted arrays
   - Time complexity: O(log(rows × cols))

ALGORITHM STEPS (Binary Search):
1. Initialize start = 0, end = rows × cols - 1
2. While start <= end:
   - Calculate mid = start + (end - start) / 2
   - Convert mid to row and column indices
   - If target found: return true
   - If target < current: search left half
   - If target > current: search right half
3. Return false if not found

EXAMPLE:
Input: 5x4 sorted array, target = 11
Output: "found" (at position [2][2])

PROCESS (Binary Search):
- start = 0, end = 19
- mid = 9, rowIndex = 2, colIndex = 1, value = 10
- 11 > 10, so start = 10
- mid = 14, rowIndex = 3, colIndex = 2, value = 15
- 11 < 15, so end = 13
- Continue until found or start > end

VECTOR OF VECTORS:
- Declaration: vector<vector<int>> arr(rows, vector<int>(cols, value))
- Creates 2D vector with specified dimensions and initial value
- More flexible than static arrays

TIME COMPLEXITY:
- Linear Search: O(n²)
- Staircase Search: O(n)
- Binary Search: O(log n)

SPACE COMPLEXITY: O(1) for all search methods

================================================================================
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// Linear Search - O(n²)
bool linearSearch(int arr[][3], int rows, int cols, int key){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

// Binary Search - O(log n)
bool binarySearch(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int end = rows * cols - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        
        if(arr[rowIndex][colIndex] == target){
            return true;
        }
        if(arr[rowIndex][colIndex] < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

// Find minimum in 2D array
int findMin(int arr[][3], int rows, int cols){
    int min = INT_MAX;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    return min;
}

// Find maximum in 2D array
int findMax(int arr[][3], int rows, int cols){
    int max = INT_MIN;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    // Test arrays
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sortedArr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, 
                           {13, 14, 15, 16}, {17, 18, 19, 20}};
    
    cout << "=== 2D Array Search Algorithms ===" << endl;
    
    // Linear Search
    cout << "\n1. Linear Search:" << endl;
    int key = 5;
    if(linearSearch(arr, 3, 3, key)){
        cout << key << " found in array" << endl;
    } else {
        cout << key << " not found in array" << endl;
    }
    
    // Binary Search
    cout << "\n2. Binary Search:" << endl;
    int target;
    cout << "Enter target to search: ";
    cin >> target;
    
    if(binarySearch(sortedArr, 5, 4, target)){
        cout << target << " found in sorted array" << endl;
    } else {
        cout << target << " not found in sorted array" << endl;
    }
    
    // Min/Max finding
    cout << "\n3. Min/Max in 2D Array:" << endl;
    cout << "Minimum: " << findMin(arr, 3, 3) << endl;
    cout << "Maximum: " << findMax(arr, 3, 3) << endl;
    
    // Vector of vectors
    cout << "\n4. Vector of Vectors:" << endl;
    vector<vector<int>> vec(3, vector<int>(3, 5));  // 3x3 array with value 5
    
    cout << "Vector array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}




// --------------------------min from array----------------------------


//#include<iostream>
//#include<limits.h>
//using namespace std;
//
//
//int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int row=3;
//    int cols=3;
//    int min= INT_MAX;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            if(min > arr[i][j]){
//                min=arr[i][j];
//                
//            }
//        }
//    }
//    cout<<min;
//}



//-------------------------- max in array----------------------------------------
//
//#include<iostream>
//#include<limits.h>
//using namespace std;
//
//
//int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int row=3;
//    int cols=3;
//    int max= INT_MIN;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            if(max < arr[i][j]){
//                max=arr[i][j];
//                
//            }
//        }
//    }
//    cout<<max;
//}

//------------------- declaration  and inititialize the 
                    // vector of vector-------------------------------------------------
                    
                 //   vector<vector<int> >arr(row,vector<int>(col,value))
                 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
//   vector<vector<int> >arr(5,vector<int>(5,9));
//    cout<<arr[3][2];
   vector<vector<int> >brr(5,vector<int>(7,5));
    
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    
}

