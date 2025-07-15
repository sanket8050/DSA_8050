
/*
================================================================================
TITLE: Hollow Pyramid Pattern
================================================================================

DESCRIPTION:
This program prints a hollow pyramid pattern using asterisks (*).
It creates a pyramid shape with only the borders filled with
asterisks and empty space inside.

LOGIC:
HOLLOW PYRAMID ALGORITHM:
- Total columns = 2*n - 1
- For each row i:
  - Print leading spaces: n-i-1
  - Print asterisks and spaces for the pyramid body
  - Print asterisks only at specific positions

ASTERISK POSITIONS:
- First asterisk in row (k == 0)
- Last asterisk in row (k == 2*i)
- Bottom row (i == n-1): all positions
- All other positions: spaces

PATTERN FORMATION:
- Row 0: 4 spaces + 1 asterisk + 4 spaces
- Row 1: 3 spaces + 1 asterisk + 2 spaces + 1 asterisk + 3 spaces
- Row 2: 2 spaces + 1 asterisk + 4 spaces + 1 asterisk + 2 spaces
- Row 3: 1 space + 1 asterisk + 6 spaces + 1 asterisk + 1 space
- Row 4: 9 asterisks (bottom row)

PATTERN EXAMPLE (n=5):
         *     
       *   *    
     *       *   
   *           *  
 * * * * * * * * *

EXAMPLE:
Input: n=5
Output: 5-row hollow pyramid

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/ 

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k=0;
		for(int j=0;j<((2*n)-1);j++){
			if(j<n-i-1){
				cout<<"  ";
			}
			else if(k<2*i+1){
				if(k==0|| k==2*i  || i==n-1){
					cout<<"* ";
				}
				else {
					cout<<"  ";
				}
				k++;
				
			}
			else{
				cout<<" ";
			}
			}
		cout<<endl;
		}
 }

