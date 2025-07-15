/*
================================================================================
TITLE: Hollow Rectangle Pattern
================================================================================

DESCRIPTION:
This program prints a hollow rectangle pattern using asterisks (*).
The rectangle has borders made of asterisks and empty space inside.

LOGIC:
- Use nested loops to create a 6x7 grid
- Outer loop (i) controls rows (0 to 5)
- Inner loop (j) controls columns (0 to 6)
- Print "*" only at the borders:
  - First row (i == 0)
  - Last row (i == 5)
  - First column (j == 0)
  - Last column (j == 6)
- Print space " " for all other positions

PATTERN OUTPUT:
******
*    *
*    *
*    *
*    *
******

TIME COMPLEXITY: O(n*m) where n=rows, m=columns
SPACE COMPLEXITY: O(1)

================================================================================
*/
#include<iostream>
using namespace std;
// int main(){
// 	for (int i=0;i<6;i++){
// 		for(int j=0;j<7;j++){
// 			if(i==0 || j==0 || j==6 || i==5)
// 				cout<<"*";
			
// 			else
// 				cout<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

int main(){

	for(int i =0 ;i<6;i++){
		for(int j =0;j <7;j++){
			if(i == 0 || j == 0 || i == 5 || j==6){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}