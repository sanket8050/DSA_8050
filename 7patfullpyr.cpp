/*
================================================================================
TITLE: Full Pyramid Pattern
================================================================================

DESCRIPTION:
This program prints a full pyramid pattern using asterisks (*).
It demonstrates how to create a pyramid shape with increasing
number of asterisks in each row and proper spacing.

LOGIC:
PYRAMID PATTERN ALGORITHM:
- Total columns = 2*n - 1 (where n is number of rows)
- For each row i:
  - Print spaces: n-i-1 spaces
  - Print asterisks: 2*i+1 asterisks
  - Print remaining spaces

PATTERN FORMATION:
- Row 0: 3 spaces + 1 asterisk + 3 spaces = 7 total
- Row 1: 2 spaces + 3 asterisks + 2 spaces = 7 total
- Row 2: 1 space + 5 asterisks + 1 space = 7 total
- Row 3: 0 spaces + 7 asterisks + 0 spaces = 7 total

MATHEMATICAL RELATIONSHIP:
- Spaces before: n-i-1
- Asterisks: 2*i+1
- Total width: 2*n-1

PATTERN EXAMPLE (n=4):
    *
   ***
  *****
 *******

EXAMPLE:
Input: n=4
Output: 4-row pyramid with 7-column base

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/                                                                         

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{      
		int k=0;
		for(int j=0;j<((2*n)-1);j++)
		{	
			
			if(j<n-i-1){
				cout<<"  ";
			}
			else if(k<(2*i+1)){
				cout<<" *";
				k++;
			}
			else{
				cout<<" ";
			}	
		}
		cout<<endl;
		
	}
	return 0;

}



int main()
{


	int n=6;

	for(int i = 0;i<n;i++){
		int  k =0;
		for(int j = 0; j < (n-i-1); j++){
			if(j < n - i -1){
				cout<<" ";
			}
			else if(j < 2*i+1){
				cout<<"*";
				k++;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;

	}

}
