/*
================================================================================
TITLE: Rectangle Pattern with Asterisks
================================================================================

DESCRIPTION:
This program prints a rectangle pattern using asterisks (*).
It demonstrates nested loops where the outer loop controls rows
and the inner loop controls columns.

LOGIC:
NESTED LOOP STRUCTURE:
- Outer loop (row): controls the number of rows (1 to 3)
- Inner loop (col): controls the number of columns (1 to 5)
- Each iteration prints an asterisk with spaces

PATTERN FORMATION:
- 3 rows × 5 columns = 15 asterisks total
- Each row contains 5 asterisks separated by spaces
- After each row, a newline is printed

LOOP EXECUTION:
- Row 1: Print 5 asterisks → newline
- Row 2: Print 5 asterisks → newline  
- Row 3: Print 5 asterisks → newline

PATTERN OUTPUT:
  *   *   *   *   *  
  *   *   *   *   *  
  *   *   *   *   *  

EXAMPLE:
Input: None
Output: 3×5 rectangle of asterisks

TIME COMPLEXITY: O(n×m) where n=rows, m=columns
SPACE COMPLEXITY: O(1)

================================================================================
*/


#include<iostream>
using namespace std;
int main()
{
	//outer loop for row
	for(int row=1;row<4;row++)
	{
		// inner loop for column
		for(int col=1;col<6;col++)
		{
			cout<<"  *  ";
		}

		cout<<endl;	
	}
}
