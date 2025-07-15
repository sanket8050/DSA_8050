/*
================================================================================
TITLE: Character Array Input Methods Comparison
================================================================================

DESCRIPTION:
This program demonstrates the difference between different methods of reading
character arrays in C++. It shows why cin.getline() is preferred over cin
when reading strings that may contain spaces or special characters.

LOGIC:
INPUT METHODS COMPARISON:

1. cin >> ch:
   - Reads until whitespace (space, tab, newline)
   - Stops at first space encountered
   - Cannot read strings with spaces
   - Example: "Hello World" → only "Hello" is read

2. cin.getline(name, size):
   - Reads entire line including spaces
   - Stops at newline character or when buffer is full
   - Can read strings with spaces
   - Example: "Hello World" → "Hello World" is read

WHY USE getline():
- Handles spaces in input
- More robust for string input
- Prevents buffer overflow with size parameter
- Better for user input scenarios

EXAMPLE:
Input: "Hello World"
- cin >> ch: Output: "Hello"
- cin.getline(name, 10): Output: "Hello Wor" (truncated due to size limit)

BUFFER SIZE CONSIDERATIONS:
- Always allocate enough space for expected input
- Include space for null terminator '\0'
- Size parameter in getline() should be array size - 1

EDGE CASES:
- Input longer than buffer: truncated
- Empty input: handled properly
- Special characters: handled by getline()

TIME COMPLEXITY: O(n) where n is input length
SPACE COMPLEXITY: O(1) - fixed size array

================================================================================
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100];  // Increased size for better usability
    
    cout << "Enter a string (may contain spaces): ";
    cin.getline(name, 100);  // Read entire line including spaces
    cout << "You entered: " << name << endl;
    
    // Demonstrate the difference
    cout << "\nDemonstration of input methods:" << endl;
    
    char ch1[50];
    cout << "Enter string for cin >> (will stop at space): ";
    cin >> ch1;  // This will only read until first space
    cout << "cin >> result: " << ch1 << endl;
    
    // Clear input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    char ch2[50];
    cout << "Enter string for cin.getline() (reads spaces): ";
    cin.getline(ch2, 50);
    cout << "cin.getline() result: " << ch2 << endl;
    
    // Show string length
    cout << "\nString analysis:" << endl;
    cout << "Length of first string: " << strlen(ch1) << endl;
    cout << "Length of second string: " << strlen(ch2) << endl;
}
