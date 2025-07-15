/*
================================================================================
TITLE: Anagram Detection Using Frequency Counting
================================================================================

DESCRIPTION:
This program checks if two strings are anagrams by comparing character
frequencies. An anagram is a word formed by rearranging the letters of
another word, using all the original letters exactly once.

LOGIC:
FREQUENCY COUNTING APPROACH:
- Use a frequency array of size 26 (for lowercase letters)
- Count characters in first string (increment)
- Count characters in second string (decrement)
- If all frequencies are zero, strings are anagrams

ALGORITHM STEPS:
1. Check if lengths are equal (anagrams must have same length)
2. Initialize frequency array with zeros
3. For each character in first string: frequency[char - 'a']++
4. For each character in second string: frequency[char - 'a']--
5. Check if all frequencies are zero

CHARACTER MAPPING:
- 'a' maps to index 0 (ASCII 97 - 97 = 0)
- 'b' maps to index 1 (ASCII 98 - 97 = 1)
- 'z' maps to index 25 (ASCII 122 - 97 = 25)

EXAMPLE:
Input: s = "sanket", t = "kasten"
Output: true (anagrams)

PROCESS:
- Length check: 6 == 6 ✓
- Frequency array: [1,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0]
- After decrementing t: [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
- All zeros ✓

ALTERNATIVE APPROACHES:
- Sort both strings and compare
- Use hash map for any character set
- Use bit manipulation for single character

EDGE CASES:
- Different lengths: not anagrams
- Empty strings: anagrams
- Same string: anagrams
- Case sensitivity: this implementation assumes lowercase

TIME COMPLEXITY: O(n) where n is string length
SPACE COMPLEXITY: O(1) - fixed size frequency array

================================================================================
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagrams(string s, string t){
    vector<int> frequency(26, 0);
    
    // Check lengths first
    if(s.length() != t.length()){
        return false;
    }
    
    // Count characters in first string
    for(int i = 0; i < s.length(); i++){
        frequency[s[i] - 'a']++;
    }
    
    // Decrement for characters in second string
    for(int i = 0; i < t.length(); i++){
        frequency[t[i] - 'a']--;
    }
    
    // Check if all frequencies are zero
    for(int count : frequency){
        if(count != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "sanket";
    string t;
    cout << "Enter a string to check if it's an anagram of '" << s << "': ";
    cin >> t;
    
    bool ans = isAnagrams(s, t);
    if(ans){
        cout << "✓ '" << t << "' is an anagram of '" << s << "'" << endl;
    } else {
        cout << "✗ '" << t << "' is NOT an anagram of '" << s << "'" << endl;
    }
    
    // Test with examples
    cout << "\nTest cases:" << endl;
    cout << "sanket vs kasten: " << (isAnagrams("sanket", "kasten") ? "Anagrams" : "Not anagrams") << endl;
    cout << "hello vs world: " << (isAnagrams("hello", "world") ? "Anagrams" : "Not anagrams") << endl;
    cout << "listen vs silent: " << (isAnagrams("listen", "silent") ? "Anagrams" : "Not anagrams") << endl;
}


