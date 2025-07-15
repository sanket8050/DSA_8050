/*
================================================================================
TITLE: For Loop with Multiplication Pattern
================================================================================

DESCRIPTION:
This program demonstrates a for loop that prints multiples of 2.
It shows how to use for loop initialization, condition, and increment
to create a pattern of numbers.

LOGIC:
FOR LOOP STRUCTURE:
- Initialization: int i = 1
- Condition: i <= 10 (loop while i is less than or equal to 10)
- Increment: i*2 (multiply i by 2 each iteration)


LOOP EXECUTION:
- i starts at 1
- Condition: 1 <= 10 (true) → print 2*1 = 2
- i becomes 1*2 = 2
- Condition: 2 <= 10 (true) → print 2*2 = 4
- i becomes 2*2 = 4
- Condition: 4 <= 10 (true) → print 2*4 = 8
- i becomes 4*2 = 8
- Condition: 8 <= 10 (true) → print 2*8 = 16
- i becomes 8*2 = 16
- Condition: 16 <= 10 (false) → exit loop

EXAMPLE:
Input: None
Output:
2
4
8
16

TIME COMPLEXITY: O(log n) where n is the limit
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main (){
	for(int i=1;i<=10 ; i*2)
		
		cout<<2*i<<endl;
		
	}
