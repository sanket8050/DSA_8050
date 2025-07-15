/*
================================================================================
TITLE: Prime Number Checker
================================================================================

DESCRIPTION:
This program checks whether a given number is prime or not.
A prime number is a natural number greater than 1 that has no positive divisors
other than 1 and itself.

LOGIC:
PRIME CHECKING ALGORITHM:
- If number is less than 2, it's not prime
- Check divisibility from 2 to sqrt(num)
- If any number divides evenly, it's not prime
- If no divisors found, it's prime

OPTIMIZATION:
- Only check up to sqrt(num) instead of num-1
- If num has a factor greater than sqrt(num), it must have a corresponding
  factor less than sqrt(num)

MATHEMATICAL REASONING:
If n is not prime, it can be written as n = a × b
If a > sqrt(n), then b < sqrt(n)
Therefore, we only need to check up to sqrt(n)

EXAMPLE:
Input: 17
Output: "prime" (17 has no divisors other than 1 and 17)

Input: 15
Output: "not prime" (15 = 3 × 5)

TIME COMPLEXITY: O(√n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num){

	for(int i=2;i<sqrt(num);i++){
		if(num%i==0 ){
			return false;	
		}
		
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	
	bool final=prime(n);
	if(final){
		cout<<"prime";
	}
	else{
		cout<<"not prime";
	}
}
