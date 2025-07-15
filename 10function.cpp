/*
================================================================================
TITLE: Function to Add Two Numbers
================================================================================

DESCRIPTION:
This program demonstrates basic function creation and calling in C++.
It creates a function that adds two integers and returns their sum.

LOGIC:
FUNCTION DEFINITION:
- Function name: add
- Parameters: int x, int y
- Return type: int
- Function body: return x + y

FUNCTION CALLING:
- Declare variables a and b
- Get input from user
- Call add(a, b) and store result in sum
- Print the result

FUNCTION WORKFLOW:
1. User inputs two numbers
2. Function add() is called with these numbers
3. Function returns their sum
4. Result is printed

EXAMPLE:
Input: a = 5, b = 3
Process: add(5, 3) → return 5 + 3 → return 8
Output: "sum is 8"

FUNCTION BENEFITS:
- Code reusability
- Modular programming
- Cleaner main function
- Easier testing and debugging

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int add(int x,int y){
	
	return x + y;
	
}

int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	//calling the funnction
	int sum = add(a,b);
		cout<<"sum is "<<sum<<endl;
	
}


