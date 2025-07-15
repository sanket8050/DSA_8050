/*
================================================================================
TITLE: Palindrome String Checker
================================================================================

DESCRIPTION:
This program checks whether a given string is a palindrome or not.
A palindrome is a string that reads the same backward as forward.

LOGIC:
1. Calculate string length using custom length() function
2. Use two pointers (i and j) starting from both ends
3. Compare characters from both ends moving towards center
4. If any mismatch found, return false
5. If all characters match, return true

ALGORITHM:
- i starts from beginning (0)
- j starts from end (length-1)
- While i <= j:
  - If arr[i] != arr[j]: return false
  - Else: i++, j--
- Return true if loop completes

EXAMPLE:
Input: "racecar"
Output: true (palindrome)

Input: "hello"
Output: false (not palindrome)

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int length(char arr[]){
	int count=0;
	int i=0;
	while(arr[i] != '\0'){
		i++;
		count++;
	}
	return count;
}
bool palimdrom(char arr[]){
	int i=0;
	int j=+ length(arr)-1;

	while(i<=j){
		if(arr[i] != arr[j]){
			return 0;
		}
		else{
			i++;
			j--;
		}
	}
	return 1;
}
int main(){
	char arr[100] = "())(";
	cout<<palimdrom(arr);
}