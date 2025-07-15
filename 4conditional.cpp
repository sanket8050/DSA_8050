/*
================================================================================
TITLE: Basic If-Else Conditional Statement
================================================================================

DESCRIPTION:
This program demonstrates the basic if-else conditional statement in C++.
It shows how to use boolean variables and conditional logic to control
program flow based on true/false conditions.

LOGIC:
IF-ELSE CONDITIONAL:
- If condition is true (non-zero): execute if block
- If condition is false (zero): execute else block
- Boolean values: true = 1, false = 0

CONDITION EVALUATION:
- bro = false (which is 0)
- if(bro == 0) → if(0 == 0) → if(true)
- Since condition is true, "bat banegi" is printed

BOOLEAN COMPARISON:
- bro == 0: true (because bro is false/0)
- bro == 1: false (because bro is not true/1)

EXAMPLE:
Input: bro = false
Output: "bat banegi"

ALTERNATIVE SCENARIOS:
- If bro = true: Output would be "nahi jamega"
- If bro = 1: Output would be "nahi jamega"
- If bro = 0: Output would be "bat banegi"

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main ()
{
	bool bro= false;
	// cout<<"enter the bro code"<<endl;
	// cin>>bro;
		if(bro==0)
		{
			cout<<"bat banegi"<<endl;
	       }
		else
		{
			cout<<"nahi jamega"<<endl;
		}
}
