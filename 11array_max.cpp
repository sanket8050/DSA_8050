/*
================================================================================
TITLE: Find Maximum Element in Array
================================================================================

DESCRIPTION:
This program finds the maximum element in an array using a simple linear scan.
It uses INT_MIN from <limits.h> to initialize the maximum value for comparison.

LOGIC:
- Initialize maxi to INT_MIN (smallest possible integer)
- Iterate through each element of the array
- If current element is greater than maxi, update maxi
- After the loop, maxi contains the largest value in the array

EXAMPLE:
Input: arr = [2, 5, 78, 5, 45, 86, 1, 0]
Process:
- Start with maxi = INT_MIN
- Compare each element and update maxi
- Final maxi = 86
Output: "max num 86"

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/
#include<iostream>
#include<limits.h>                             // library
using namespace std;
int main(){
    
    int maxi = INT_MIN;                         // int_min give the possible smallest value to compare (-[2^31-1])
    int arr[]={2,5,78,5,45,86,1,0};
    for(int i=0;i<8;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"max num "<<maxi<<endl;
    
}
