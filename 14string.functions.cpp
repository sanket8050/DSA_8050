/*
================================================================================
TITLE: C++ String Built-in Functions Demonstration
================================================================================

DESCRIPTION:
This program demonstrates various built-in string functions in C++ including
find(), replace(), and erase(). These functions provide powerful string
manipulation capabilities without manual implementation.

LOGIC:
STRING FUNCTIONS OVERVIEW:

1. find(substring):
   - Returns the index of first occurrence of substring
   - Returns string::npos if substring not found
   - Case-sensitive search
   - Syntax: str.find("substring")

2. replace(start, length, new_string):
   - Replaces characters from start position for specified length
   - Replaces with new_string
   - Can change string length
   - Syntax: str.replace(start, length, "new_string")

3. erase(start, length):
   - Removes characters from start position for specified length
   - Reduces string length
   - Syntax: str.erase(start, length)

FUNCTION PARAMETERS:
- start: beginning index (0-based)
- length: number of characters to affect
- new_string: string to insert/replace with

EXAMPLE:
Input: "sanket"
- erase(0, 2): removes first 2 characters → "nket"
- replace(0, 2, "hello"): replaces first 2 with "hello" → "hellonket"
- find("ket"): finds "ket" starting at index 3

EDGE CASES:
- Invalid indices: undefined behavior
- Length > remaining characters: affects until end
- Empty substring in find: returns 0
- String::npos: special value for "not found"

TIME COMPLEXITY:
- find(): O(n×m) where n=str length, m=substring length
- replace(): O(n) where n=new string length
- erase(): O(n) where n=remaining string length

SPACE COMPLEXITY: O(1) for most operations

================================================================================
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "=== String Functions Demonstration ===" << endl;
    
    // 1. find() function
    cout << "\n1. find() function:" << endl;
    string str1 = "sanket is tall";
    cout << "String: " << str1 << endl;
    cout << "find(\"tall\"): " << str1.find("tall") << endl;
    cout << "find(\"is\"): " << str1.find("is") << endl;
    cout << "find(\"xyz\"): " << (str1.find("xyz") == string::npos ? "Not found" : to_string(str1.find("xyz"))) << endl;
    
    // 2. replace() function
    cout << "\n2. replace() function:" << endl;
    string str2 = "sanket";
    string str3 = "adsare";
    cout << "Original: " << str2 << endl;
    cout << "Replace with: " << str3 << endl;
    str2.replace(0, 6, str3);
    cout << "After replace(0, 6, str3): " << str2 << endl;
    
    // 3. erase() function
    cout << "\n3. erase() function:" << endl;
    string str4 = "sanket";
    cout << "Original: " << str4 << endl;
    str4.erase(0, 2);
    cout << "After erase(0, 2): " << str4 << endl;
    
    // Additional examples
    cout << "\n4. More examples:" << endl;
    string str5 = "hello world";
    cout << "Original: " << str5 << endl;
    
    // Find and replace
    size_t pos = str5.find("world");
    if(pos != string::npos){
        str5.replace(pos, 5, "universe");
        cout << "After find and replace: " << str5 << endl;
    }
    
    // Erase from middle
    string str6 = "programming";
    cout << "Original: " << str6 << endl;
    str6.erase(3, 4);  // Remove "gram"
    cout << "After erase(3, 4): " << str6 << endl;
}
