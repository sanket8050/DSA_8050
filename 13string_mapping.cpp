/*
================================================================================
TITLE: Character Frequency Sorting and Mapping in Strings
================================================================================

DESCRIPTION:
This program demonstrates how to count the frequency of each character in a string,
sort the characters by their frequency (descending), and then print the sorted
characters. If two characters have the same frequency, they are sorted
alphabetically.

LOGIC:
FREQUENCY COUNTING:
- Uses an unordered_map to store the frequency of each character in the input string.

SORTING:
- Copies the frequency map to a vector of pairs for sorting.
- Custom comparator sorts first by frequency (higher first), then by character
    (alphabetically).

ALGORITHM STEPS:
1. Initialize an unordered_map to count character frequencies.
2. Iterate through the input string and update the frequency map.
3. Copy the frequency map to a vector of pairs for sorting.
4. Sort the vector using a custom comparator:
     - Higher frequency comes first.
     - If frequencies are equal, sort alphabetically.
5. Print only the characters in sorted order.

EXAMPLE:
Input: "tree"
Frequency Map: {'t': 1, 'r': 1, 'e': 2}
Sorted Output: 'e' 'r' 't'

PROCESS:
- Count frequency: {'t': 1, 'r': 1, 'e': 2}
- Sort: 'e' (2), 'r' (1), 't' (1)
- Print: 'e' 'r' 't'

EDGE CASES:
- Empty string: No output.
- String with all identical characters: Single character printed.
- String with all unique characters: Printed in alphabetical order.

TIME COMPLEXITY: O(n + k log k), where n is string length and k is number of unique characters.
SPACE COMPLEXITY: O(k), where k is number of unique characters.

================================================================================
*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int>& a, pair<char, int>& b) {
    if (a.second != b.second)
        return a.second > b.second; // Higher frequency first
    return a.first < b.first;       // Alphabetical order
}

int main() {
    string s = "tree";
    unordered_map<char, int> freq;

    // Step 1: Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Copy to vector for sorting
    vector<pair<char, int>> freqList(freq.begin(), freq.end());

    // Step 3: Sort using comparator
    sort(freqList.begin(), freqList.end(), cmp);

    // Step 4: Print only characters
    for (auto& p : freqList) {
        cout << "'" << p.first << "' ";
    }
    return 0;
}
