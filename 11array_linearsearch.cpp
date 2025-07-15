/*
================================================================================
TITLE: Linear Search Algorithm
================================================================================

DESCRIPTION:
This program implements the linear search algorithm to find an element
in an array. It sequentially checks each element until the target is found.

LOGIC:
LINEAR SEARCH ALGORITHM:
- Sequentially check each element from start to end
- Compare each element with the target key
- If found: set flag = 1 and break
- If not found: flag remains 0

ALGORITHM STEPS:
1. Initialize flag = 0 (element not found)
2. Iterate through array: for(int i = 0; i < size; i++)
3. If arr[i] == key: set flag = 1 and break
4. After loop: check flag value
5. If flag == 1: "present", else: "absent"

FLAG SYSTEM:
- flag = 0: element absent (default)
- flag = 1: element present (when found)

EXAMPLE:
Input: arr = [1,2,3,4,5,6], key = 4
Process:
- i=0: arr[0]=1 ≠ 4, continue
- i=1: arr[1]=2 ≠ 4, continue
- i=2: arr[2]=3 ≠ 4, continue
- i=3: arr[3]=4 == 4, flag=1, break
Output: "present"

Input: arr = [1,2,3,4,5,6], key = 8
Process:
- Check all elements, none match
- flag remains 0
Output: "absent"

ADVANTAGES:
- Simple to implement
- Works on unsorted arrays
- Guaranteed to find element if present

DISADVANTAGES:
- Inefficient for large arrays
- Time complexity: O(n)

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    int key;
    cin>>key;
    bool flag=0;
    // flag=1 -> present
    // flag=0 -> absent
 
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
            break;
            
            
        }
    }
    
    if(flag==1){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
