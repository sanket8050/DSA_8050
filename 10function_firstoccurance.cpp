
/*
================================================================================
TITLE: First and Last Occurrence of Element in Sorted Array
================================================================================

DESCRIPTION:
This program demonstrates how to find the first and last occurrence of an
element in a sorted array using both custom binary search and STL functions.
It includes commented implementations of custom algorithms and active STL usage.

LOGIC:
CUSTOM BINARY SEARCH APPROACH (commented):
FIRST OCCURRENCE:
- Use binary search with modification
- When target == v[mid]: store index and search left half (end = mid-1)
- Continue until start > end
- Return the leftmost occurrence

LAST OCCURRENCE:
- Use binary search with modification  
- When target == v[mid]: store index and search right half (start = mid+1)
- Continue until start > end
- Return the rightmost occurrence

STL APPROACH (active):
- lower_bound(): finds first occurrence
- upper_bound(): finds position after last occurrence
- Count = upper_bound - lower_bound

ALGORITHM STEPS:
1. Use lower_bound to find first occurrence
2. Use upper_bound to find position after last occurrence
3. Calculate last index: upper_bound - 1
4. Calculate count: upper_bound - lower_bound

EXAMPLE:
Input: v = [1,2,3,4,4,4,5,6], target = 4
Output:
- First occurrence: index 3
- Last occurrence: index 5
- Count: 3

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int firstOccurance(vector<int> v,int target){
//    int start = 0;
//    int end = v.size()-1;
//    int index;
//    int mid=start+(end-start)/2;
//    
//    while(start <= end){
//        if(target==v[mid]){
//            index=mid;
//            end=mid-1;
//        }
//        else if(target > v[mid]){
//            start=mid+1;
//        }
//        else if(target < v[mid]){
//            end = mid-1;
//        }
//         mid=start+(end-start)/2;
//    }
//    return index;
//}
//
//int main(){
//int target=4;
//vector<int> v;
//v.push_back(1);
//v.push_back(2);
//v.push_back(4);
//v.push_back(4);                   //instead of ====== vector<int> v{1,2,3,4,4,4,5};=======
//v.push_back(5);
//int index=firstOccurance(v,target);
//cout<<"fount at index: "<<index;
//}

//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

// finding the last ocurance of element----------------------------------------------------------



//#include<iostream>
//#include<vector>
//using namespace std;
//int firstOccurance(vector<int> v,int target){
//    int start = 0;
//    int end = v.size()-1;
//    int index;
//    int mid=start+(end-start)/2;
//    
//    while(start <= end){
//        if(target==v[mid]){
//            index=mid;
//            start=mid+1;
//        }
//        else if(target > v[mid]){
//            start=mid+1;
//        }
//        else if(target < v[mid]){
//            end = mid-1;
//        }
//         mid=start+(end-start)/2;
//    }
//    return index;
//}
//
//int main(){
//int target=4;
//vector<int> v;
//v.push_back(1);
//v.push_back(2);
//v.push_back(4);
//v.push_back(4);                   //instead of ====== vector<int> v{1,2,3,4,4,4,5};=======
//v.push_back(5);
//int index=firstOccurance(v,target);
//cout<<"fount at index: "<<index;
//}


//>>>>>>>--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//-------------------inbuilt function --------------------- 


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 4, 4, 5, 6};
    int target = 4;

    auto first = lower_bound(v.begin(), v.end(), target);
    auto last = upper_bound(v.begin(), v.end(), target);

    int firstIndex = first - v.begin();       // ✅ proper way
    int lastIndex = last - v.begin() - 1;     // ✅ last actual 4
    int count = last - first;                 // ✅ number of times 4 appears

    if (count > 0) {
        cout << "First occurrence of " << target << " is at index: " << firstIndex << endl;
        cout << "Last occurrence of " << target << " is at index: " << lastIndex << endl;
        cout << "Number of times " << target << " appears: " << count << endl;
    } else {
        cout << "Element " << target << " not found in the vector." << endl;
    }

    return 0;
}

