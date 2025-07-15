/*
================================================================================
TITLE: String Basic Operations and Manipulation
================================================================================

DESCRIPTION:
This program demonstrates fundamental string operations in C++ including
input methods, length calculation, emptiness check, push_back, pop_back,
and character access. It shows the difference between cin and getline.

LOGIC:
STRING INPUT METHODS:
- cin >> str: reads until whitespace (spaces, tabs, newlines)
- getline(cin, str): reads entire line including spaces
- getline(cin, str, delimiter): reads until specific delimiter

STRING OPERATIONS:
1. length(): returns number of characters in string
2. empty(): returns true if string has no characters
3. push_back(char): adds character at the end
4. pop_back(): removes last character
5. str[index]: accesses character at specific position

IMPORTANT DIFFERENCES:
- cin stops at first whitespace
- getline reads complete line with spaces
- String indices start from 0

EXAMPLE:
Input: "Hello World"
- cin >> str: str = "Hello"
- getline(cin, str): str = "Hello World"
- After pop_back(): "Hello Worl"
- str[1]: 'e' (second character)

STRING PROPERTIES:
- Dynamic size (grows/shrinks automatically)
- Zero-based indexing
- Mutable (can be modified)
- Null-terminated internally

TIME COMPLEXITY:
- length(): O(1)
- empty(): O(1)
- push_back(): O(1) amortized
- pop_back(): O(1)
- Character access: O(1)

SPACE COMPLEXITY: O(n) where n is string length

================================================================================
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    
    cout << "Enter a string with spaces: ";
    getline(cin, str);  // Reads entire line including spaces
    
    cout << "String entered: " << str << endl;
    cout << "Length of string: " << str.length() << endl;
    cout << "Is string empty? " << (str.empty() ? "Yes" : "No") << endl;
    
    // Add character at the end
    str.push_back('!');
    cout << "After push_back('!'): " << str << endl;
    
    // Remove last character
    str.pop_back();
    cout << "After pop_back(): " << str << endl;
    
    // Access specific character
    if(str.length() > 1) {
        cout << "Character at index 1: " << str[1] << endl;
    }
    
    // Demonstrate cin vs getline
    cout << "\nEnter another string (cin will stop at space): ";
    cin >> str;  // This will only read until first space
    cout << "String read by cin: " << str << endl;
}
