/*
================================================================================
TITLE: Hollow Inverted Right Triangle Pattern
================================================================================

DESCRIPTION:
This program prints a hollow inverted right triangle pattern using asterisks (*).
The pattern has borders made of asterisks with empty space inside, forming a
decreasing triangle shape.

LOGIC:
- Use nested loops to create the pattern
- Outer loop (i) controls rows from 0 to n-1
- Inner loop (j) controls columns from 0 to n-i-1
- Print "*" only at the borders:
  - First row (i == 0): all positions
  - First column (j == 0): all rows
  - Last column (j == n-i-1): diagonal border
- Print space " " for all other positions

PATTERN EXAMPLE (n=5):
*****
*  * 
* *
**
*

ALGORITHM:
For each row i:
- Print (n-i) characters
- If i==0 OR j==0 OR j==n-i-1: print "*"
- Else: print " "

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main(){
	int n=10;
	// cin>>n;
	

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(i==0 || j==0 || j==n-i-1 )
			{
			cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
