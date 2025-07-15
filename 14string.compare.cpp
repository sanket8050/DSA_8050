/*
================================================================================
TITLE: String Comparison Methods
================================================================================

DESCRIPTION:
This program demonstrates two methods of comparing strings in C++:
1. Using the built-in compare() method
2. Using a custom comparison function
It shows how to check if two strings are identical.

LOGIC:
BUILT-IN COMPARE METHOD:
- str1.compare(str2) returns:
  * 0 if strings are equal
  * Positive if str1 > str2
  * Negative if str1 < str2
- Case-sensitive comparison

CUSTOM COMPARE FUNCTION:
- First checks if lengths are equal
- Then compares each character position by position
- Returns true if strings are identical, false otherwise
- Also case-sensitive

COMPARISON PROCESS:
1. Length check: if lengths differ, strings are different
2. Character-by-character comparison
3. If all characters match, strings are equal

EXAMPLE:
Input: str1 = "sanket", str2 = "Sanket"
Output: 
- Built-in compare: "not same" (case-sensitive)
- Custom function: false (case-sensitive)

COMPARISON EXAMPLES:
- "hello" vs "hello": equal
- "Hello" vs "hello": not equal (case-sensitive)
- "hello" vs "world": not equal
- "hello" vs "hell": not equal (different lengths)

IMPORTANT NOTES:
- Both methods are case-sensitive
- Custom function has a logic error (missing return statement)
- Built-in method is more robust and efficient

TIME COMPLEXITY: O(min(n,m)) where n,m are string lengths
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<string>
using namespace std;

// Custom string comparison function
bool compareString(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;  // Fixed: added missing return statement
}

int main(){
    string str1 = "sanket";
    string str2 = "Sanket";
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    
    // Using built-in compare method
    if(str1.compare(str2) == 0){
        cout << "Built-in compare: same" << endl;
    } else {
        cout << "Built-in compare: not same" << endl;
    }
    
    // Using custom function
    bool result = compareString(str1, str2);
    cout << "Custom function: " << (result ? "same" : "not same") << endl;
    
    // Demonstrate with equal strings
    string str3 = "sanket";
    cout << "\nComparing " << str1 << " with " << str3 << ":" << endl;
    cout << "Built-in: " << (str1.compare(str3) == 0 ? "same" : "not same") << endl;
    cout << "Custom: " << (compareString(str1, str3) ? "same" : "not same") << endl;
}
