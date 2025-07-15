
/*
================================================================================
TITLE: Peak Element in Mountain Array
================================================================================

DESCRIPTION:
This program finds the peak element in a mountain array (bitonic array).
A mountain array first increases to a peak, then decreases.

LOGIC:
MOUNTAIN ARRAY PROPERTIES:
- Array first increases monotonically to a peak
- Then decreases monotonically
- Peak is the maximum element in the array

BINARY SEARCH APPROACH:
- Use binary search to find the peak
- Compare mid element with mid+1 element
- If arr[mid] < arr[mid+1]: peak is on right side
- If arr[mid] > arr[mid+1]: peak is on left side or at mid

ALGORITHM STEPS:
1. Initialize start = 0, end = size-1
2. While start < end:
   - Calculate mid = (start + end) / 2
   - If arr[mid] < arr[mid+1]: start = mid + 1
   - Else: end = mid
3. Return start (peak index)

EXAMPLE:
Input: arr = [1,3,4,500,4,3,2]
Process:
- mid = 3, arr[3] = 500, arr[4] = 4
- 500 > 4, so end = 3
- mid = 1, arr[1] = 3, arr[2] = 4
- 3 < 4, so start = 2
- mid = 2, arr[2] = 4, arr[3] = 500
- 4 < 500, so start = 3
- start = end = 3, exit loop

Output: 
3
which is 500

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,3,4,500,4,3,2};
    int size= sizeof(arr)/sizeof(int);
    int s=0;
    int e = size-1;
    int mid=(s+e)/2;
    while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=(s+e)/2;
    }
    cout<<mid<<endl;
    cout<<"which is "<<arr[mid];
}
