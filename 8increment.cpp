/*
================================================================================
TITLE: Increment Operator Precedence and Evaluation
================================================================================

DESCRIPTION:
This program demonstrates the behavior of increment operators (++a) in expressions
and how they affect the final result. It shows the difference between pre-increment
and post-increment operators in complex expressions.

LOGIC:
INCREMENT OPERATOR BEHAVIOR:
- ++a (pre-increment): increments first, then uses the value
- a++ (post-increment): uses the value first, then increments
- In expressions like (++a)*(++a), both increments happen before multiplication

EXPRESSION EVALUATION:
1. (++a)*(++a) where a starts as 5
2. First ++a: a becomes 6, value is 6
3. Second ++a: a becomes 7, value is 7
4. Result: 6 * 7 = 42

IMPORTANT NOTES:
- The order of evaluation in expressions with multiple increments is undefined
- Different compilers may produce different results
- This demonstrates why you should avoid multiple increments in single expressions

EXAMPLE:
Input: a = 5
Output: 42 (6 * 7, where both increments happen before multiplication)

WARNING:
- This code demonstrates undefined behavior
- Avoid multiple increments in single expressions in production code
- Use separate statements for clarity and predictability

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int c = (++a)*(++a);
    cout<<c<<endl;
}
