//-------------------------BINARY SEARCH--------------------------------8

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


