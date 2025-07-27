#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm> 
using namespace std;

int function(const string&s){
    unordered_map<char,int>map;
    for(char c : s){
        map[c]++;

    }

    vector<pair<char,int>>vec(map.begin(),map.end());

    sort(vec.begin(),vec.end(), [](pair<char,int>&a,pair<char,int>&b){
        return a.second < b.second;
    });

    for(auto&c : vec){
        cout << c.first<<" ";
    }
        
}

/*
=== WHAT THIS PROGRAM DOES ===
Takes a string and sorts its characters by frequency (least frequent first)
Example: "tree" -> t(1), r(1), e(2) -> output: "t r e"

=== KEY CONCEPTS TO REMEMBER ===
1. pair<char, int> = box with 2 compartments [character | count]
   - .first = left compartment (the character)
   - .second = right compartment (the count)

2. unordered_map<char, int> = dictionary that maps character -> count
   - Like: {'t': 1, 'r': 1, 'e': 2}
   - Can't be sorted directly

3. vector<pair<char, int>> = list of pairs that CAN be sorted
   - Like: [('t',1), ('r',1), ('e',2)]

4. Lambda function [](){} = mini-function written inline
   - Used for custom comparison during sorting
*/

int main() {
    string s = "tree";
    function("sanketa");
    
    // STEP 1: Count frequency of each character
    // Think: Count marbles of different colors
    unordered_map<char, int> freq; // Creates empty dictionary: char -> count
    
    for (char c : s) {          // Go through each character in "tree"
        freq[c]++;              // Add 1 to count for this character
    }
    // After loop: freq = {'t': 1, 'r': 1, 'e': 2}
    
    // STEP 2: Transfer to vector of pairs (so we can sort it)
    // unordered_map can't be sorted, but vector can!
    vector<pair<char, int>> vec(freq.begin(), freq.end());
    
    // Now vec contains: [('t',1), ('r',1), ('e',2)] or similar order
    // Each element is a pair where:
    // - pair.first = the character
    // - pair.second = how many times it appears
    
    // STEP 3: Sort based on frequency (ascending order = smallest first)
    sort(vec.begin(), vec.end(),                    // Sort entire vector
         [](pair<char, int>& a, pair<char, int>& b) { // Lambda function for comparison
            /*
            This mini-function compares two pairs:
            - 'a' and 'b' are two pairs being compared
            - a.second = count of first pair
            - b.second = count of second pair
            - return true if 'a' should come before 'b'
            
            Example comparisons:
            - Compare ('t',1) vs ('e',2): Is 1 < 2? YES! So 't' comes first
            - Compare ('r',1) vs ('e',2): Is 1 < 2? YES! So 'r' comes first
            */
            return a.second < b.second; // Put smaller counts first (ascending)
         });
    
    // After sorting: vec = [('t',1), ('r',1), ('e',2)] 
    // (all count-1 letters first, then count-2 letters)
    
    // STEP 4: Print characters in ascending order of frequency
    cout << "Characters sorted by frequency (ascending): ";
    for (auto& p : vec) {       // Go through each pair in sorted vector
        cout << p.first << " "; // Print just the character (not the count)
        // p.first = character, p.second = count (we only want character)
    }

    
    return 0;
}

/*
=== TRACE THROUGH EXAMPLE "tree" ===
1. Count: t=1, r=1, e=2
2. Pairs: [('t',1), ('r',1), ('e',2)]
3. Sort by count: smaller counts first
   - Compare ('t',1) vs ('r',1): 1 < 1? No, equal
   - Compare ('t',1) vs ('e',2): 1 < 2? Yes, 't' before 'e'
   - Compare ('r',1) vs ('e',2): 1 < 2? Yes, 'r' before 'e'
4. Result: [('t',1), ('r',1), ('e',2)]
5. Print: "t r e"

=== COMMON CONFUSIONS CLARIFIED ===
- Why transfer to vector? Because unordered_map can't be sorted
- What is .first and .second? Parts of a pair (character and count)
- What does lambda do? Tells sort() how to compare two pairs
- Why a.second < b.second? We want to sort by count (frequency)
*/




