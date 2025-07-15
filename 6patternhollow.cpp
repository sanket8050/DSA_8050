/*
================================================================================
TITLE: Hollow Rectangle Pattern (User Input)
================================================================================

DESCRIPTION:
This program prints a hollow rectangle pattern using asterisks (*) based on
user input for rows and columns. It demonstrates conditional logic within
nested loops to create hollow patterns.

LOGIC:
HOLLOW RECTANGLE ALGORITHM:
- Use nested loops: outer for rows, inner for columns
- Print "*" only at the borders:
  - First row (i == 0)
  - Last row (i == n-1)
  - First column (j == 0)
  - Last column (j == m-1)
- Print space " " for all other positions

CONDITIONAL LOGIC:
if(i==0 || i==n-1 || j==0 || j==m-1):
- i==0: top border
- i==n-1: bottom border
- j==0: left border
- j==m-1: right border

PATTERN EXAMPLE (n=6, m=8):
********
*      *
*      *
*      *
*      *
********

EXAMPLE:
Input: n=4, m=5
Output:
*****
*   *
*   *
*****

TIME COMPLEXITY: O(n×m)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
//int main ()
//{
//	for(int row=0;row<4;row=row+1)
//	{
//		if(row==0 || row==3)
//		{
//			for(int col=0;col<5;col++)
//			{
//				cout<<"*";
//			}
//		}
//		else	{
//		
//			cout<<"*";
//			for(int col=1;col<=3;col++)
//			{
//			cout<<" ";	
//			}
//			cout<<"*";	
//		}
//		
//	      	cout<<endl;
//	}



#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"no of rows";
	cin>>n;
	cout<<"no of col";
	int m;
	cin>>m;
	for(int i=0;i<n;i++){
	 
		for(int j=0;j<m;j++){
			if(i==0 || i==n-1 ||j==0  || j==m-1){
				cout<<"*";
			}
			else{
			cout<<" ";
			}
		
		}
			cout<<endl;
		}
}

