// Topic: Recursion, Factorial
// Question: Write a recursive function to calculate the factorial of a given number n. The function should take an integer n as input and return n! using recursion. Implement a main function to read n from the user, call the recursive function, and print the result.
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
