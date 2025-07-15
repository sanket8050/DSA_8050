/*
================================================================================
TITLE: Pointer Basics and Memory Address Operations
================================================================================

DESCRIPTION:
This program demonstrates basic pointer operations including declaration,
initialization, dereferencing, and address manipulation. It shows how pointers
work with memory addresses and values.

LOGIC:
POINTER CONCEPTS:
- Pointer stores memory address of a variable
- & operator: gets address of a variable
- * operator: dereferences pointer to get value at address
- Pointers must be initialized with valid addresses before dereferencing

POINTER OPERATIONS:
1. Declaration: int *p declares a pointer to int
2. Address assignment: p = &a assigns address of 'a' to pointer 'p'
3. Dereferencing: *p gets the value at address stored in 'p'
4. Address arithmetic: p + 1 moves to next memory location

MEMORY LAYOUT:
- Variables are stored in memory with specific addresses
- Pointers can manipulate these addresses
- Careful with uninitialized pointers (can cause segmentation fault)

EXAMPLE:
Input: a = 5
Output: 
- Value of a: 5
- Address of a: 0x7fff... (memory address)
- Value at p: 5 (dereferenced pointer)
- Address of p: 0x7fff... (pointer's own address)

IMPORTANT NOTES:
- Always initialize pointers before use
- Be careful with pointer arithmetic
- Dereferencing uninitialized pointers causes undefined behavior

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;  // Initialize pointer with address of 'a'
    int *q = p + 1;  // Pointer arithmetic - next memory location

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value at p: " << *p << endl;
    cout << "Address stored in p: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Address stored in q: " << q << endl;
    
    // Demonstrate pointer arithmetic
    cout << "p + 1: " << p + 1 << endl;
    cout << "p - 1: " << p - 1 << endl;
}