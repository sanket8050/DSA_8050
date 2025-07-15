

/*
================================================================================
TITLE: Array Reversal Algorithm
================================================================================

DESCRIPTION:
This program reverses the elements of an array in-place using the two-pointer
technique and the built-in swap function.

LOGIC:
TWO-POINTER APPROACH:
- Use two pointers: start (beginning) and end (end of array)
- Swap elements at start and end positions
- Move start pointer forward and end pointer backward
- Continue until start >= end

ALGORITHM STEPS:
1. Initialize start = 0, end = size-1
2. While start <= end:
   - Swap arr[start] and arr[end]
   - start++
   - end--
3. Array is now reversed

EXAMPLE:
Input: [1, 2, 3, 4, 5, 6, 7]
Output: [7, 6, 5, 4, 3, 2, 1]

PROCESS:
[1,2,3,4,5,6,7] → [7,2,3,4,5,6,1] → [7,6,3,4,5,2,1] → [7,6,5,4,3,2,1]

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1) - in-place reversal

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int start=0;
    int end=6;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
