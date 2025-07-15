/*
================================================================================
TITLE: Recursive Exponentiation (Power Function)
================================================================================

DESCRIPTION:
This program implements a recursive function to calculate n raised to the power i (n^i).
It demonstrates the concept   of recursion where a function calls itself with a smaller
subproblem until it reaches a base case.

LOGIC:
- Base case: if i == 0, return 1 (any number raised to 0 is 1)
- Recursive case: return n * product(n, i-1)
- Each recursive call reduces the exponent by 1
- The recursion continues until i becomes 0

RECURSIVE FORMULA:
n^i = n × n^(i-1)
n^0 = 1 (base case)

EXAMPLE:
Input: n = 2, i = 3
Output: 8 (2^3 = 2 × 2 × 2 = 8)

RECURSION TREE:
product(2,3) → 2 × product(2,2) → 2 × 2 × product(2,1) → 2 × 2 × 2 × product(2,0) → 2 × 2 × 2 × 1 = 8

TIME COMPLEXITY: O(i)
SPACE COMPLEXITY: O(i) - due to recursion stack

================================================================================
*/
#include<iostream>
using namespace std;
int product(int n,int i){
  
        if(i==0){
            return 1;
        }
        else{
            return n * product(n,i-1);
        }
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int a = product(n,i);
    cout<<a;
}
