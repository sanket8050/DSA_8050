/*
================================================================================
TITLE: Relational Operators in C++
================================================================================

DESCRIPTION:
This program demonstrates the use of relational operators in C++.
It shows how to compare two values and returns boolean results
(0 for false, 1 for true).

LOGIC:
RELATIONAL OPERATORS:
- Less than (<): a < b
- Greater than (>): a > b
- Less than or equal (<=): a <= b
- Greater than or equal (>=): a >= b
- Equal to (==): a == b
- Not equal to (!=): a != b

BOOLEAN OUTPUT:
- 0 represents false
- 1 represents true

OPERATION DEMONSTRATED:
- a = 3, b = 5
- Comparison: 3 > 5
- Result: 0 (false)

EXAMPLE:
Input: a = 3, b = 5
Output: 0 (because 3 is not greater than 5)

OTHER EXAMPLES:
- 3 < 5 → 1 (true)
- 3 == 5 → 0 (false)
- 3 != 5 → 1 (true)
- 5 >= 3 → 1 (true)

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/ 

#include<iostream>
using namespace std;
int main ()
{
    int a = 3;
    int b = 5;
    cout << (a>b) <<endl;
}