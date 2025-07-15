/*
================================================================================
TITLE: Custom String Length Function
================================================================================

DESCRIPTION:
This program implements a custom function to calculate the length of a character
array (string) without using the built-in strlen() function. It demonstrates
how to iterate through a null-terminated character array to count characters.

LOGIC:
CUSTOM LENGTH FUNCTION:
- Iterate through character array until null terminator '\0' is found
- Count each character encountered
- Return the total count

ALGORITHM STEPS:
1. Initialize counter (length) to 0
2. Initialize index (i) to 0
3. While character at index i is not '\0':
   - Increment length counter
   - Increment index i
4. Return length

NULL TERMINATION:
- C-style strings end with '\0' (null terminator)
- This marks the end of the string
- Without null terminator, we can't determine string length

EXAMPLE:
Input: "Hello"
Output: 5

PROCESS:
- 'H' at index 0: length = 1
- 'e' at index 1: length = 2
- 'l' at index 2: length = 3
- 'l' at index 3: length = 4
- 'o' at index 4: length = 5
- '\0' at index 5: stop, return 5

COMPARISON WITH BUILT-IN:
- strlen() from <string.h> does the same thing
- Custom implementation helps understand the concept
- Both have O(n) time complexity

EDGE CASES:
- Empty string: returns 0
- Single character: returns 1
- Very long string: limited by array size

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1) - only using variables

================================================================================
*/

#include<iostream>
#include<string.h>
using namespace std;

// Custom function to calculate string length
int getLength(char name[]){
    int i = 0;
    int length = 0;
    
    // Iterate until null terminator is found
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    char name[100];  // Increased size for better usability
    
    cout << "Enter a string: ";
    cin.getline(name, 100);  // Read entire line including spaces
    
    int ans = getLength(name);
    cout << "Length of string: " << ans << endl;
    
    // Compare with built-in strlen
    int builtInLength = strlen(name);
    cout << "Built-in strlen result: " << builtInLength << endl;
    
    // Test with different inputs
    cout << "\nTest cases:" << endl;
    char test1[] = "Hello";
    cout << "Length of 'Hello': " << getLength(test1) << endl;
    
    char test2[] = "";
    cout << "Length of empty string: " << getLength(test2) << endl;
    
    char test3[] = "A";
    cout << "Length of 'A': " << getLength(test3) << endl;
}
