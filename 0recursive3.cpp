/*
================================================================================
TITLE: Recursive Pattern Printing (Increasing Order)
================================================================================

DESCRIPTION:
This program implements a recursive function to print a pattern of '#' characters
in increasing order. Each line contains one more '#' than the previous line,
demonstrating recursion with printing after the recursive call.

LOGIC:
RECURSIVE PATTERN ALGORITHM:
- Base case: if n == 0, return (stop recursion)
- Recursive case: call printPattern(n-1) first, then print n '#' characters
- Recursive call happens before printing
- This results in increasing order: 1, 2, 3, ..., n '#' characters

RECURSION FLOW:
printPattern(3) → printPattern(2) → printPattern(1) → printPattern(0) → return → print 1# → print 2## → print 3###

PATTERN EXAMPLE (n=4):
#
##
###
####

RECURSION TREE:
printPattern(4) → printPattern(3) → printPattern(2) → printPattern(1) → printPattern(0) → return → print 1# → print 2## → print 3### → print 4####

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(n) - due to recursion stack

================================================================================
*/
#include <iostream>

using namespace std;







void printPattern(int n) {
    if (n == 0) {
        return;
    }
    
    printPattern(n - 1); // Recursive call first
    for (int i = 0; i < n; i++) {
        cout << "#";
    }
    cout << endl;

    
}

int main() {
    int n = 4;
    printPattern(n);
    return 0;
}

