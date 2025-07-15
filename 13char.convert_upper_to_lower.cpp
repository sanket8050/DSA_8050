/*
================================================================================
TITLE: Character Case Conversion - Upper to Lower
================================================================================

DESCRIPTION:
This program demonstrates how to convert uppercase characters to lowercase
in a character array. It includes a custom strlen function and a conversion
function that modifies the original array in-place.

LOGIC:
CUSTOM STRLEN FUNCTION:
- Iterates through character array until null terminator '\0'
- Counts characters to determine string length
- Returns the length of the string

CASE CONVERSION ALGORITHM:
- ASCII values: 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122
- Difference between upper and lower: 32
- To convert upper to lower: add 32 (or subtract 'A' and add 'a')
- Formula: arr[i] = arr[i] - 'A' + 'a'

CONVERSION PROCESS:
1. Check if character is uppercase (ASCII 65-90)
2. If uppercase, convert using the formula
3. If lowercase or other, leave unchanged
4. Process entire string in-place

ASCII CHARACTER RANGES:
- Uppercase: A-Z (65-90)
- Lowercase: a-z (97-122)
- Numeric: 0-9 (48-57)

EXAMPLE:
Input: "SaDNJKBDC"
Output: "sadnjkbdc"

CONVERSION EXAMPLES:
- 'S' (83) → 's' (115): 83 - 65 + 97 = 115
- 'A' (65) → 'a' (97): 65 - 65 + 97 = 97
- 'N' (78) → 'n' (110): 78 - 65 + 97 = 110

ALTERNATIVE METHODS:
- Use tolower() function from <cctype>
- Use bitwise operations (OR with 32)
- Use conditional operator

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1) - in-place conversion

================================================================================
*/

#include<iostream>
using namespace std;

// Custom string length function
int strlen(char arr[]){
    int i = 0;
    int count = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

// Convert uppercase to lowercase
void convert_upper_to_lower(char arr[]){
    int n = strlen(arr);
    for(int i = 0; i < n; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';  // Convert to lowercase
        }
    }
}

int main(){
    char arr[100] = "SaDNJKBDC";
    
    cout << "Original string: " << arr << endl;
    cout << "String length: " << strlen(arr) << endl;
    
    convert_upper_to_lower(arr);
    cout << "After conversion: " << arr << endl;
    
    // Demonstrate with user input
    char userInput[100];
    cout << "\nEnter a string with mixed case: ";
    cin >> userInput;
    
    cout << "Original: " << userInput << endl;
    convert_upper_to_lower(userInput);
    cout << "Converted: " << userInput << endl;
}
