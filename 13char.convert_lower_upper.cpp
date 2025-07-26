/*
================================================================================
TITLE: Character Case Conversion - Lowercase to Uppercase
================================================================================

DESCRIPTION:
This program converts all lowercase letters in a string to uppercase letters.
It includes a custom string length function and demonstrates character manipulation
using ASCII values.

LOGIC:
CHARACTER CONVERSION:
- ASCII values: 'a' = 97, 'z' = 122, 'A' = 65, 'Z' = 90
- Difference between lowercase and uppercase: 32
- Formula: lowercase - 'a' + 'A' = uppercase
- Alternative: lowercase - 32 = uppercase

ALGORITHM STEPS:
1. Calculate string length using custom strlen function
2. Iterate through each character in the string
3. Check if character is lowercase (between 'a' and 'z')
4. Convert to uppercase using ASCII arithmetic
5. Leave non-lowercase characters unchanged

STRING LENGTH FUNCTION:
- Iterate until null terminator ('\0') is found
- Count characters encountered
- Return total count

EXAMPLE:
Input: "Sanket"
Output: "SANKET"

PROCESS:
- 'S' (uppercase) → unchanged
- 'a' (97) → 97 - 97 + 65 = 65 ('A')
- 'n' (110) → 110 - 97 + 65 = 78 ('N')
- 'k' (107) → 107 - 97 + 65 = 75 ('K')
- 'e' (101) → 101 - 97 + 65 = 69 ('E')
- 't' (116) → 116 - 97 + 65 = 84 ('T')

ASCII VALUES:
- 'a' = 97, 'b' = 98, ..., 'z' = 122
- 'A' = 65, 'B' = 66, ..., 'Z' = 90
- Difference: 32 (constant)

EDGE CASES:
- Empty string: no conversion needed
- String with no lowercase: no changes
- String with special characters: ignored
- String with numbers: ignored

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

// Convert lowercase to uppercase
void convertLowerToUpper(char arr[]){
    int n = strlen(arr);
    
    for(int i = 0; i < n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            // Convert to uppercase using ASCII arithmetic
            arr[i] = arr[i] - 'a' + 'A';
            // Alternative: arr[i] = arr[i] - 32;
        }
    }
}

// Convert uppercase to lowercase
void convertUpperToLower(char arr[]){
    int n = strlen(arr);
    
    for(int i = 0; i < n; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            // Convert to lowercase using ASCII arithmetic
            arr[i] = arr[i] - 'A' + 'a';
            // Alternative: arr[i] = arr[i] + 32;
        }
    }
}

int main(){
    char arr[100] = "Sanket";
    
    cout << "Original string: " << arr << endl;
    cout << "String length: " << strlen(arr) << endl;
    
    // Convert to uppercase
    convertLowerToUpper(arr);
    cout << "After conversion to uppercase: " << arr << endl;
    
    // Convert back to lowercase
    convertUpperToLower(arr);
    cout << "After conversion to lowercase: " << arr << endl;
    
    // Test with different strings
    cout << "\nTest cases:" << endl;
    
    char test1[100] = "Hello World";
    cout << "Test 1: " << test1 << " → ";
    convertLowerToUpper(test1);
    cout << test1 << endl;
    
    char test2[100] = "PYTHON PROGRAMMING";
    cout << "Test 2: " << test2 << " → ";
    convertUpperToLower(test2);
    cout << test2 << endl;
    
    char test3[100] = "MiXeD cAsE 123";
    cout << "Test 3: " << test3 << " → ";
    convertLowerToUpper(test3);
    cout << test3 << endl;
}


// #include<iostream>
// using namespace std;

// int main(){
//     char arr[18] = "sanket is d";
//     cout<<arr;
// }