/*
================================================================================
TITLE: Array Pattern - First Last Alternating
================================================================================

DESCRIPTION:
This program rearranges an array by alternating between first and last elements.
It uses two pointers to print elements from both ends simultaneously.

LOGIC:
TWO-POINTER APPROACH:
- Use start pointer (beginning) and end pointer (end of array)
- Print elements from both ends alternately
- Move start pointer forward and end pointer backward
- Handle odd and even array sizes

ALGORITHM STEPS:
1. Initialize start = 0, end = size-1
2. While start <= end:
   - If start > end: break (safety check)
   - If start == end: print single element (odd array)
   - Else: print start and end elements
   - Increment start, decrement end

EXAMPLE:
Input: arr = [1,2,3,4,5]
Process:
- start=0, end=4: print 1,5
- start=1, end=3: print 2,4
- start=2, end=2: print 3 (single element)
Output: 1 5 2 4 3

For even array [1,2,3,4,5,6]:
Output: 1 6 2 5 3 4

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int start=0;
    int end=size-1;
    while(start<=end){
        if(start>end)
            break;
        if(arr[start]==arr[end])                  // odd element  condiotion 
            cout<<arr[start]<<" ";                // if not used then it print one element double
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
            
        }
        start++;
        end--;
    }
    
}
