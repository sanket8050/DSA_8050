/*
================================================================================
TITLE: Factorial Function
================================================================================

DESCRIPTION:
This program calculates the factorial of a given number using an iterative approach.
Factorial of a number n (denoted as n!) is the product of all positive integers 
from 1 to n.

LOGIC:
- Initialize fact = 1
- Loop from i = 1 to n
- Multiply fact by i in each iteration: fact = fact * i
- Return the final result

MATHEMATICAL DEFINITION:
n! = n × (n-1) × (n-2) × ... × 2 × 1
0! = 1 (by definition)

EXAMPLE:
Input: 5
Output: 120 (5! = 5 × 4 × 3 × 2 × 1 = 120)

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact = fact*i;
	}
	
	return fact;
}

int main(){
	int num;
	cout<<"enter the num: ";
	cin>>num;
	int result=factorial(num);
	cout<<"factorial of "<<num<<":  "<<result<<endl;
}    