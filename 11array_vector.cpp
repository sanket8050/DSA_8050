/*
================================================================================
TITLE: Vector Introduction and Basic Operations
================================================================================

DESCRIPTION:
This program demonstrates the basic usage of C++ STL vector container.
It shows vector declaration, size, capacity, and dynamic resizing properties.

LOGIC:
VECTOR PROPERTIES:
- Dynamic array that can resize automatically
- Elements are stored in contiguous memory
- Capacity doubles when more space is needed
- Initial elements are zero-initialized

VECTOR OPERATIONS:
1. Declaration: vector<int> arr(n) - creates vector with n elements (all 0)
2. push_back(6) - adds element at the end
3. size() - returns number of elements
4. capacity() - returns allocated memory space
5. empty() - returns true if vector is empty

EXAMPLE:
Input: n = 5
Output: 
- Size: 6 (5 initial + 1 pushed)
- Capacity: 10 (doubled from 5)
- Elements: [0 0 0 0 0 6]

MEMORY MANAGEMENT:
- Initial capacity = n
- When push_back exceeds capacity, new capacity = 2 * old_capacity
- This ensures amortized O(1) time for push_back operations

TIME COMPLEXITY:
- push_back: O(1) amortized
- size/capacity/empty: O(1)

SPACE COMPLEXITY: O(n) where n is the number of elements


Use dynamic memory when:
    Input size is huge
    Data size is not known beforehand
    You’re creating expandable or recursive structures

================================================================================
*/

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    // declaration of vector
    
    vector<int>arr(n);
    // add "6" in the array 
    
    arr.push_back(6);
    // print size of array
    
    cout<<arr.size()<<endl;                 // [0 0 0 0 0 6]   if initial is n=5
    // print whole capacity of vector which get doubled the initial
    
    cout<<arr.capacity()<<endl;             // [0 0 0 0 0 6 0 0 0 0]   capacity doubles the initial
	                                                                   // as per the property of vector.
	                                                                   
	cout<<arr.empty() <<endl;      // print in bool
	
	for(int i=0;i<arr.size();i++){
		
		cout<<arr[i]<<" ";
	}                                                                   																		
    return 0;                                
}


//  vector

// vector<int> v;
// v.reserve(1000); // allocates memory for 1000 elements

// for (int i = 0; i < 1000; i++) {
//     v.push_back(i); // NO resizing occurs during these pushes
// }

// int n = 5;
// vector<int> v(n);   // initializes vector of size 5 → [0, 0, 0, 0, 0]
// v.push_back(6);     // adds 6 to the end

// - Size: 6            // 5 initial + 1 pushed
// - Capacity: 10       // capacity doubled internally
// - Elements: [0 0 0 0 0 6]


// 🟢 Amortized O(1)
// Why?
// Although resizing is costly (O(n)), it happens rarely (once every time the capacity doubles).

// So over many push_back() calls, the average time per call stays O(1).

// This is known as amortized time complexity.

