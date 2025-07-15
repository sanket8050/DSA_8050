/*
================================================================================
TITLE: Recursive Number Printing (Decreasing Order)
================================================================================

DESCRIPTION:
This program implements a recursive function to print numbers from n down to 1
in decreasing order. It demonstrates recursion with printing before the recursive call.

LOGIC:
RECURSIVE PRINTING ALGORITHM:
- Base case: if n == 0, return (stop recursion)
- Recursive case: print n, then call printNumbers(n-1)
- Numbers are printed before the recursive call
- This results in decreasing order: n, n-1, n-2, ..., 1

RECURSION FLOW:
printNumbers(3) → print 3 → printNumbers(2) → print 2 → printNumbers(1) → print 1 → printNumbers(0) → return

EXAMPLE:
Input: n = 5
Output: 5 4 3 2 1

RECURSION TREE:
printNumbers(5) → print 5 → printNumbers(4) → print 4 → printNumbers(3) → print 3 → printNumbers(2) → print 2 → printNumbers(1) → print 1 → printNumbers(0) → return

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(n) - due to recursion stack

================================================================================
*/

#include <iostream>

using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    printNumbers(10);
    return 0;
}

