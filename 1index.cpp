/*
================================================================================
TITLE: Basic Arithmetic Operations in C++
================================================================================

DESCRIPTION:
This program demonstrates the use of basic arithmetic operators in C++.
It shows addition, subtraction, multiplication, and division operations
on double variables, along with commented examples of type casting and
ASCII value conversions.

LOGIC:
ARITHMETIC OPERATORS:
- Addition (+): a + b
- Subtraction (-): a - b  
- Multiplication (*): a * b
- Division (/): a / b
- Modulo (%): a % b (for integers)

TYPE CASTING EXAMPLES (commented):
- char ch = 97; // ASCII value to character
- int num = 'b'; // Character to ASCII value
- int x = (int)a; // Double to integer casting

OPERATIONS DEMONSTRATED:
- a = 5.0, b = 3.0
- Addition: 5.0 + 3.0 = 8.0
- Subtraction: 5.0 - 3.0 = 2.0
- Multiplication: 5.0 × 3.0 = 15.0
- Division: 5.0 ÷ 3.0 = 1.666...

EXAMPLE:
Input: a = 5.0, b = 3.0
Output:
8
2
15
1.66667

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
 int main(){
//     char ch = 97;
//     cout<<ch <<endl;
//     int num = 'b';
//     cout<< num<<endl; 

//     double a = 7.5;
//     int x = (int)a;
//     cout << x<<endl;
double a = 5;
double b = 3;
cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
}