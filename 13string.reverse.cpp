/*
================================================================================
TITLE: String Manipulation Functions
================================================================================

DESCRIPTION:
This program contains multiple string manipulation functions:
1. getlength() - calculates string length
2. reversestring() - reverses a string in-place
3. replacespace() - replaces spaces with underscores

LOGIC:
GETLENGTH FUNCTION:
- Iterate through string until null terminator '\0'
- Count characters and return length

REVERSESTRING FUNCTION:
- Use two-pointer technique (i and j)
- i starts from beginning, j from end
- Swap characters at i and j positions
- Move i forward, j backward until i >= j

REPLACESPACE FUNCTION:
- Iterate through string character by character
- If character is space ' ', replace with underscore '_'

EXAMPLE:
Input: "hello world"
After reverse: "dlrow olleh"
After space replacement: "hello_world"

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1) - in-place operations

================================================================================
*/

#include<iostream>
using namespace std;
int getlength(char name[]){
	int i=0;
	int length=0;
	while(name[i] != '\0'){
		length++;
		i++;
	}
	return length;
}
void reversestring(char name[]){
	
	int i=0;
	int j=getlength(name)-1;
	while(i<=j){
		swap(name[i],name[j]);
		i++;
		j--;
	}
}
void replacespace(char sentence[]){

	int j = getlength( sentence);
	for(int i=0;i<j;i++){
		if(sentence[i]== ' '){
			sentence[i] = '_';
		}
	}
	 
		
	}

int main(){
	char sentence[100];
	cin.getline(sentence,50);
	replacespace(sentence);
	cout<<sentence<<endl;
}
