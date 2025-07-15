/*
================================================================================
TITLE: String Descending Sort Using Custom Comparator
================================================================================

DESCRIPTION:
This program demonstrates how to sort a string in descending order using
a custom comparator function with the STL sort algorithm. It shows the
difference between ascending and descending sort operations.

LOGIC:
CUSTOM COMPARATOR FUNCTION:
- bool cmr(char a, char b) returns true if a > b
- This creates descending order (larger characters first)
- sort() uses this function to determine element order

SORTING PROCESS:
1. String "sanket" is converted to character array
2. Custom comparator cmr(a,b) compares characters
3. sort() arranges characters based on comparator
4. Result: characters in descending ASCII order

COMPARATOR BEHAVIOR:
- cmr('a', 'b') returns false (a < b)
- cmr('b', 'a') returns true (b > a)
- This ensures descending order

EXAMPLE:
Input: "sanket"
Output: "tsnkea" (sorted in descending order)

ASCII ORDER:
- 't' (116) > 's' (115) > 'n' (110) > 'k' (107) > 'e' (101) > 'a' (97)

ALTERNATIVE APPROACHES:
- Use greater<char>() instead of custom function
- Use reverse() after ascending sort
- Use rbegin() and rend() iterators

TIME COMPLEXITY: O(n log n) - sort algorithm
SPACE COMPLEXITY: O(1) - in-place sorting

================================================================================
*/

#include<iostream>
#include<string>
using namespace std;
#include<algorithm>

// Custom comparator for descending order
bool cmr(char a, char b){
    return a > b;  // Returns true if a should come before b
}

int main(){
    string s = "sanket";
    sort(s.begin(), s.end(), cmr);
    cout << "Original string: sanket" << endl;
    cout << "Descending sort: " << s << endl;
    
    // Alternative using STL greater<char>()
    string s2 = "sanket";
    sort(s2.begin(), s2.end(), greater<char>());
    cout << "Using greater<char>(): " << s2 << endl;
}