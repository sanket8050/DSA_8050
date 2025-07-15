/*
================================================================================
TITLE: Reverse Vowels in String
================================================================================

DESCRIPTION:
This program reverses only the vowels in a given string while keeping all
other characters in their original positions. It uses a two-pointer approach
to efficiently swap vowels from both ends of the string.

LOGIC:
TWO-POINTER APPROACH:
- Use two pointers: one from start (i), one from end (j)
- Move i forward until a vowel is found
- Move j backward until a vowel is found
- Swap the vowels at positions i and j
- Continue until i >= j

VOWEL IDENTIFICATION:
- Use unordered_set for O(1) vowel lookup
- Include both uppercase and lowercase vowels
- Vowels: a, e, i, o, u, A, E, I, O, U

ALGORITHM STEPS:
1. Initialize i = 0, j = length-1
2. While i < j:
   - Move i forward until vowel found
   - Move j backward until vowel found
   - If i < j, swap characters at i and j
   - Increment i, decrement j
3. Return modified string

EXAMPLE:
Input: "adio"
Output: "oida"

PROCESS:
- i finds 'a' at position 0
- j finds 'o' at position 3
- Swap: "adio" → "odio"
- i finds 'i' at position 2
- j finds 'i' at position 2
- i >= j, stop

EDGE CASES:
- No vowels: return original string
- Single vowel: return original string
- All vowels: reverse entire string
- Mixed case: preserve case

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1) - fixed size set for vowels

================================================================================
*/

#include<iostream>
#include<unordered_set>
#include<string>
#include<cctype>
using namespace std;

string reverseVowels(string s){
    // Set of vowels (both cases)
    unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    
    int i = 0;
    int j = s.length() - 1;
    
    while(i < j){
        // Find vowel from left
        while(i < j && !vowels.count(s[i])){
            i++;
        }
        
        // Find vowel from right
        while(i < j && !vowels.count(s[j])){
            j--;
        }
        
        // Swap vowels if found
        if(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main(){
    string s = "adio";
    cout << "Original string: " << s << endl;
    
    string ans = reverseVowels(s);
    cout << "After reversing vowels: " << ans << endl;
    
    // Test with more examples
    string test1 = "hello";
    cout << "\n" << test1 << " → " << reverseVowels(test1) << endl;
    
    string test2 = "leetcode";
    cout << test2 << " → " << reverseVowels(test2) << endl;
    
    string test3 = "aA";
    cout << test3 << " → " << reverseVowels(test3) << endl;
}
