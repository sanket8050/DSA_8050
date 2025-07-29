/*
================================================================================
TITLE: Number Counting Function
================================================================================

DESCRIPTION:
This program demonstrates counting from 1 to n using different approaches.
It includes both a function-based approach with for loop and a while loop
implementation in the main function.

LOGIC:
FUNCTION-BASED COUNTING:
- Function name: counting
- Parameter: int n (limit)
- Uses for loop: for(int i=1; i<=n; i++)
- Prints each number on a new line

WHILE LOOP APPROACH:
- Initialize counter a = 0
- While condition: a <= n
- Use pre-increment: cout << ++a
- Increment a after printing

LOOP COMPARISON:
FOR LOOP:
- More readable and concise
- Automatic increment
- Clear start and end conditions

WHILE LOOP:
- More flexible control
- Manual increment required
- Can be used for complex conditions

EXAMPLE:
Input: n = 5
Output (for loop):
1
2
3
4
5

Output (while loop):
12345

DIFFERENCES:
- For loop: each number on new line
- While loop: all numbers on same line
- For loop: cleaner implementation
- While loop: more control over increment

TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int counting(int n){
	for(int i=1;i<=n;i++){
	 cout<<i<<endl;
	}
}


int mvain(){
	int n;
	cout<<"enter the limit :";
	cin>>n;
	counting(n);
	
}
//-----------------------by using while loop-------------

int main(){
	int n=20;
	//cin>>n;
	
	int a= 0;
	while(a<n){
		cout<<++a;
		
	}
}
