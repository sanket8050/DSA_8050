/*
================================================================================
TITLE: Recursive Factorial Function
================================================================================

DESCRIPTION:
This program implements a recursive function to calculate the factorial of a given
number n (n!). It demonstrates the classic recursive approach with base case and
recursive case.

LOGIC:
RECURSIVE FACTORIAL ALGORITHM:
- Base case: if n == 0, return 1 (0! = 1 by definition)
- Recursive case: return n * factorial(n-1)
- Each recursive call reduces n by 1
- Recursion continues until n becomes 0

RECURSIVE FORMULA:
n! = n × (n-1)!
0! = 1 (base case)

RECURSION TREE EXAMPLE (n=4):
factorial(4) → 4 × factorial(3) → 4 × 3 × factorial(2) → 4 × 3 × 2 × factorial(1) → 4 × 3 × 2 × 1 × factorial(0) → 4 × 3 × 2 × 1 × 1 = 24

EXAMPLE:
Input: 5
Output: 120 (5! = 5 × 4 × 3 × 2 × 1 = 120)

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(n) - due to recursion stack

================================================================================
*/
#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0){
	return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	int ans = factorial(n);
	cout<<ans;
}
