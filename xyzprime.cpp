#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string charFrequency(string s) {
    unordered_map<char, int> freq;
    
    // Count frequencies
    for (char c : s) {
        freq[c]++;
    }
    
    // Build result string
    string result = "";
    for (char c : s) {
        if (freq[c] != 0) {
            result += c + to_string(freq[c]);
            freq[c] = 0; // mark as used
        }
    }
    
    return result;
}

int main() {
    string s = "aabbc";
    cout << "Output = " << charFrequency(s) << endl;
}
