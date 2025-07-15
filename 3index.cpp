/*
================================================================================
TITLE: Logical Operators in C++
================================================================================

DESCRIPTION:
This program demonstrates the use of logical operators in C++.
It shows AND (&&), OR (||), and NOT (!) operations, along with
ASCII character conversion.

LOGIC:
LOGICAL OPERATORS:
- AND (&&): Returns true only if both conditions are true
- OR (||): Returns true if at least one condition is true
- NOT (!): Inverts the boolean value

TRUTH TABLE:
AND (&&): 0&&0=0, 0&&1=0, 1&&0=0, 1&&1=1
OR (||):  0||0=0, 0||1=1, 1||0=1, 1||1=1
NOT (!):  !0=1, !1=0

OPERATION DEMONSTRATED:
- a = 5, b = 8
- Condition: (a < b) && (a == 8)
- Step 1: 5 < 8 → true (1)
- Step 2: 5 == 8 → false (0)
- Step 3: 1 && 0 → false (0)

ASCII CONVERSION:
- char c = 65; // ASCII value 65 = 'A'
- Output: A

EXAMPLE:
Input: a = 5, b = 8, c = 65
Output:
0 (false - because 5 != 8)
A (ASCII character for 65)

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include <iostream>
using namespace std;
int main (){
    int a = 5;
    int b = 8;
    cout <<(a<b && a==8)<<endl;
    char c = 65;
    cout << c <<endl;
        
}