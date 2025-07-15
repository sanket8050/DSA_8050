/*
================================================================================
TITLE: For Loop with Division Pattern
================================================================================

DESCRIPTION:
This program demonstrates a for loop that prints numbers in decreasing
order by dividing by 2 each iteration. It shows how to use for loop
with division as the increment operation.

LOGIC:
FOR LOOP STRUCTURE:
- Initialization: int i = 100
- Condition: i > 0 (loop while i is greater than 0)
- Increment: i = i/2 (divide i by 2 each iteration)

LOOP EXECUTION:
- i starts at 100
- Condition: 100 > 0 (true) → print 100
- i becomes 100/2 = 50
- Condition: 50 > 0 (true) → print 50
- i becomes 50/2 = 25
- Condition: 25 > 0 (true) → print 25
- i becomes 25/2 = 12
- Condition: 12 > 0 (true) → print 12
- i becomes 12/2 = 6
- Condition: 6 > 0 (true) → print 6
- i becomes 6/2 = 3
- Condition: 3 > 0 (true) → print 3
- i becomes 3/2 = 1
- Condition: 1 > 0 (true) → print 1
- i becomes 1/2 = 0
- Condition: 0 > 0 (false) → exit loop

EXAMPLE:
Input: None
Output:
100
50
25
12
6
3
1

TIME COMPLEXITY: O(log n) where n is the starting value
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include <iostream>
using namespace std;
int main (){
	for(int i=100;i>0;i=i/2)
	cout<<i<<endl;
}
