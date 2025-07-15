/*
================================================================================
TITLE: Count Ones and Zeros in Array
================================================================================

DESCRIPTION:
This program counts the number of ones and zeros in a binary array.
It demonstrates array traversal and conditional counting using if-else statements.

LOGIC:
COUNTING ALGORITHM:
- Initialize counters: countOne = 0, countZeros = 0
- Traverse the array using a for loop
- For each element:
  - If element == 1: increment countOne
  - Else: increment countZeros
- Print both counts at the end

EXAMPLE:
Input: arr = [1,1,1,1,1,0,0,0,0,1,1,0]
Process:
- Traverse array and count 1s and 0s
- countOne = 7 (seven 1s)
- countZeros = 5 (five 0s)
Output:
"no of ones 7"
"no of zero 5"

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int main(){
	     // 1 2 3 4 5 6 7 8 9 10.11.12
    int arr[]={1,1,1,1,1,0,0,0,0,1,1,0};
    int size = 12;
    int countOne=0;
    int countZeros=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            countOne++;
        }
        else{
            countZeros++;
        }
       
        
        
    }
     cout<<"no of ones"<<countOne<<endl;
        cout<<"no of zero"<<countZeros<<endl;
}




// in case of array arr[]={1,1,1,1,0,0,0,0,5,98,7,8}


//    for(int i=0;i<size;i++){
//    	if(arr[i]==1){
//    		countOne++;
//	    }
//	if(arr[i]==0){
//		countZeros++;
//	}
//    }
