/*
================================================================================
TITLE: Binary Search Algorithm
================================================================================

DESCRIPTION:
This program implements the binary search algorithm to find a target element
in a sorted array. It includes both custom implementation and STL binary_search
function usage.

LOGIC:
BINARY SEARCH ALGORITHM:
- Works only on sorted arrays
- Compare target with middle element
- If target == middle: return middle index
- If target < middle: search in left half (end = mid-1)
- If target > middle: search in right half (start = mid+1)
- Continue until start > end (element not found)

ALGORITHM STEPS:
1. Initialize start = 0, end = size-1
2. While start <= end:
   - Calculate mid = (start + end) / 2
   - If arr[mid] == target: return mid
   - If target < arr[mid]: end = mid - 1
   - If target > arr[mid]: start = mid + 1
3. Return -1 if not found

EXAMPLE:
Input: arr = [1,2,4,5,6,7,8,9,10], target = 5
Output: 3 (5 is at index 3)

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include <iostream>
#include <cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start <= end){
        
    if(target==arr[mid]){
        return mid;
    }
    else if(target<arr[mid]){
        end=mid-1;
        
    }
    else{
        start=mid+1;
    }
   mid=(start+end)/2;     
                                   //------------------> again initialize
    }
   return -1; 
}


int main() {
//  int arr[]={1,2,4,5,6,7,8,9,10};
//  int size=9;
//  int target;
//  cin>>target;
   //----------------using homemade function---------------
// int indexOftarget = binarySearch(arr,size,target);
//    if(indexOftarget==-1) {
//        cout<<"not found";
//    }
//   
//    else {
//        cout<<"target is at :"<<indexOftarget<<"index"<<endl;
//    }
    
    
    // ----------------using inbuilt function---------
    
    
    vector<int> v{1,2,3,4,5,6};
    
    if(binary_search(v.begin(),v.end())){
    	cout<<"found";
	}
	else{
		cout<<"not found";
	}
   
   
 return 0;
}




//---------------------------OUTPUT=  target is at 3*rd* possition----------------------------------

//#include <iostream>
//using namespace std;
//
//// Function to return the ordinal suffix for a given number
//string getOrdinalSuffix(int index) {
//    if (index % 100 >= 11 && index % 100 <= 13) {
//        return "th";
//    }
//    switch (index % 10) {
//        case 1: return "st";
//        case 2: return "nd";
//        case 3: return "rd";
//        default: return "th";
//    }
//}
//
//// Function to perform binary search
//int binary(int arr[], int size, int target) {
//    int start = 0;
//    int end = size - 1;
//    int mid;
//    
//    while (start <= end) {
//        mid = start + (end - start) / 2; // To prevent overflow
//        if (arr[mid] == target) {
//            return mid;
//        } else if (arr[mid] > target) {
//            end = mid - 1;
//        } else {
//            start = mid + 1;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int arr[] = {1, 3, 5, 6, 8, 9, 11, 14, 15};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int target;
//    
//    cout << "Enter the target element: ";
//    cin >> target;
//    
//    int final = binary(arr, size, target);
//    
//    if (final == -1) {
//        cout << "Element not found" << endl;
//    } else {
//        string suffix = getOrdinalSuffix(final + 1); // Adding 1 to get the natural index
//        cout << "Element found at " << final + 1 << suffix << " POSSITION" << endl;
//    }
//    
//    return 0;
//}


