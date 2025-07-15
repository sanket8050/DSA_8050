/*
================================================================================
TITLE: Even-Odd Number Checker
================================================================================

DESCRIPTION:
This program checks whether a given number is even or odd using a function.
It demonstrates two methods: modulo operator (%) and bitwise AND (&).

LOGIC:
EVEN-ODD CHECKING METHODS:
1. MODULO OPERATOR (%):
   - If n % 2 == 0: number is even
   - If n % 2 == 1: number is odd
   - More intuitive and readable

2. BITWISE AND (&):
   - If n & 1 == 0: number is even
   - If n & 1 == 1: number is odd
   - More efficient (faster execution)

MATHEMATICAL REASONING:
- Even numbers: divisible by 2, last bit is 0
- Odd numbers: not divisible by 2, last bit is 1
- n & 1 extracts the last bit of n

FUNCTION IMPLEMENTATION:
- Function name: evenodd
- Parameter: int a
- Return type: bool
- Returns true for even, false for odd

EXAMPLE:
Input: 7
Process: 7 & 1 = 111 & 001 = 001 = 1 (odd)
Output: "odd"

Input: 12
Process: 12 & 1 = 1100 & 0001 = 0000 = 0 (even)
Output: "even"

PERFORMANCE COMPARISON:
- Modulo (%): Slower, more readable
- Bitwise (&): Faster, less readable
- Both give same result

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

bool  evenodd(int a){
	if(  /*....(a%2==0)....*/   /*or*/  (a&1)==0)   {
		return true;                              // %is hard operater
	}
	else{
		return false;
	}
}

int main(){
	int x;
	cout<<"enter the num"<<endl;
	cin>>x;
	
	bool result = evenodd(x);
	if(result)
	{
		cout<<"even";
		}	
	else{
		cout<<"odd";
	}
	
}
