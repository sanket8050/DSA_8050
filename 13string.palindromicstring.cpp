/*
================================================================================
TITLE: Count Palindromic Substrings
================================================================================

DESCRIPTION:
This program counts the total number of palindromic substrings in a given string.
A palindromic substring reads the same forwards and backwards. The algorithm uses
a center expansion approach to find all possible palindromes.

LOGIC:
CENTER EXPANSION APPROACH:
- For each character, treat it as center of odd-length palindromes
- For each position between characters, treat it as center of even-length palindromes
- Expand outward from each center until characters don't match

ALGORITHM STEPS:
1. For each character (odd-length palindromes):
   - Use character as center
   - Expand left and right until mismatch
   - Count palindromes found
2. For each position between characters (even-length palindromes):
   - Use position as center
   - Expand left and right until mismatch
   - Count palindromes found

PALINDROME TYPES:
- Odd-length: "aba", "abcba" (single character center)
- Even-length: "aa", "abba" (position between characters center)

EXAMPLE:
Input: "ds"
Output: 2

PROCESS:
- Character 'd': expand → "d" (1 palindrome)
- Character 's': expand → "s" (1 palindrome)
- Position between 'd' and 's': no expansion possible
- Total: 1 + 1 = 2 palindromes

DETAILED EXAMPLE:
Input: "aaa"
Output: 6

PROCESS:
- Character 'a' at index 0: "a" (1)
- Position between index 0-1: "aa" (1)
- Character 'a' at index 1: "a", "aaa" (2)
- Position between index 1-2: "aa" (1)
- Character 'a' at index 2: "a" (1)
- Total: 1 + 1 + 2 + 1 + 1 = 6

TIME COMPLEXITY: O(n²) where n is string length
SPACE COMPLEXITY: O(1) - only using variables

================================================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Expand from center and count palindromes
int expandFromCenter(const string& s, int left, int right) {
    int count = 0;
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

// Count all palindromic substrings
int countPalindromicSubstrings(const string& s) {
    int totalCount = 0;
    int length = s.length();
    
    for (int i = 0; i < length; i++) {
        // Count odd-length palindromes (single character center)
        totalCount += expandFromCenter(s, i, i);
        
        // Count even-length palindromes (position between characters center)
        totalCount += expandFromCenter(s, i, i + 1);
    }
    return totalCount;
}

int main() {
    string s = "ds";
    cout << "String: " << s << endl;
    
    int ans = countPalindromicSubstrings(s);
    cout << "Total palindromic substrings: " << ans << endl;
    
    // Test with more examples
    cout << "\nTest cases:" << endl;
    cout << "aaa → " << countPalindromicSubstrings("aaa") << endl;
    cout << "abc → " << countPalindromicSubstrings("abc") << endl;
    cout << "aba → " << countPalindromicSubstrings("aba") << endl;
    cout << "abba → " << countPalindromicSubstrings("abba") << endl;
}

