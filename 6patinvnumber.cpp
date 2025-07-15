/*
================================================================================
TITLE: Inverted Number Pattern
================================================================================

DESCRIPTION:
This program prints an inverted number pattern where each row contains 
decreasing numbers starting from 1. The pattern forms a right-angled triangle 
with numbers decreasing from left to right.

LOGIC:
- Outer loop (i) controls the number of rows
- Inner loop (j) controls the number of columns in each row
- For each row i, we print (n-i) numbers
- Numbers start from 1 and go up to (n-i)
- This creates the inverted pattern effect

PATTERN EXAMPLE (for n=5):
12345
1234
123
12
1

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/

//12345
//1234
//123
//12
//1



#include<iostream>
using namespace std;
int main(){
	
	int n = 10;
	// cout<<"enter no.";
	
	// cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<j+1;
		}
		cout<<endl;
	}
}
