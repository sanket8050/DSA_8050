/*
================================================================================
TITLE: Maximum of Three Numbers Function
================================================================================

DESCRIPTION:
This program finds the maximum among three numbers using a function.
It demonstrates conditional logic and function implementation to
compare multiple values and return the largest one.

LOGIC:
MAXIMUM FINDING ALGORITHM:
- Compare first number with other two: if a > b && a > c
- If true, return a (a is maximum)
- Else compare second number: if b > a && b > c
- If true, return b (b is maximum)
- Else return c (c is maximum)

FUNCTION IMPLEMENTATION:
- Function name: findMax
- Parameters: int a, int b, int c
- Return type: int
- Uses nested if-else conditions

COMPARISON LOGIC:
1. Check if a is greater than both b and c
2. If not, check if b is greater than both a and c
3. If not, c must be the maximum

EXAMPLE:
Input: x = 5, y = 8, z = 3
Process:
- 5 > 8 && 5 > 3 → false
- 8 > 5 && 8 > 3 → true
Output: "maximum num is: 8"

ANOTHER EXAMPLE:
Input: x = 10, y = 7, z = 4
Process:
- 10 > 7 && 10 > 4 → true
Output: "maximum num is: 10"

ALTERNATIVE APPROACHES:
- Using max() function: max(max(a,b), c)
- Using ternary operator: (a > b) ? (a > c ? a : c) : (b > c ? b : c)

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int findMax(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}

int main(){
	int x;
	cout<<"enter x"<<endl;
	cin>>x;                                       // int x,y,z;
	int y;                                        // cin>>x>>y>>z;
	cout<<"enter y"<<endl;
	cin>>y;

	int z;
	cout<<"enter z"<<endl;
	cin>>z;
	
	int maxnum = findMax(x,y,z);
	cout<<"maximum num is: "<<maxnum<<endl;
}
