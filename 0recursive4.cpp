/*
================================================================================
TITLE: Recursive Generalized Fibonacci Sequence
================================================================================

DESCRIPTION:
This program implements a recursive function to print the first n terms of a
generalized Fibonacci sequence. Unlike the standard Fibonacci (0,1,1,2,3,5...),
this allows custom starting terms t1 and t2.

LOGIC:
GENERALIZED FIBONACCI ALGORITHM:
- Base case: if n == 0, return (stop recursion)
- Recursive case: print t1, then call fibonacci(n-1, t2, t1+t2)
- Each recursive call prints current term and passes next two terms
- Sequence follows: t1, t2, t1+t2, t2+(t1+t2), ...

RECURSIVE FORMULA:
F(n) = F(n-1) + F(n-2) with custom starting terms

RECURSION FLOW:
fibonacci(4, 2, 3) → print 2 → fibonacci(3, 3, 5) → print 3 → fibonacci(2, 5, 8) → print 5 → fibonacci(1, 8, 13) → print 8 → fibonacci(0, 13, 21) → return

EXAMPLE:
Input: n=6, t1=2, t2=3
Output: 2 3 5 8 13 21

SEQUENCE BREAKDOWN:
- Term 1: 2 (t1)
- Term 2: 3 (t2)  
- Term 3: 2+3 = 5
- Term 4: 3+5 = 8
- Term 5: 5+8 = 13
- Term 6: 8+13 = 21

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(n) - due to recursion stack

================================================================================
*/

#include <iostream>

using namespace std;

void fibonacci(int n, int t1, int t2) {
    if (n == 0) {
        return;
    }
    cout << t1 << " ";
    fibonacci(n - 1, t2, t1 + t2);
}

int main() {
    int n, t1, t2;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the first two terms: ";
    cin >> t1 >> t2;

    fibonacci(n, t1, t2);
    cout << endl;

    return 0;
}

