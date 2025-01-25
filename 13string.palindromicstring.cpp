 #include <iostream>
#include <string>
using namespace std;

int bounding(const string& ssa, int left, int right) {
    int count = 0;
    while (left >= 0 && right < ssa.length() && ssa[left] == ssa[right]) {
        count++;
        left--;
        right++;
    }
    return count;
}

int totalcouting( string& ssa) {
    int totalcount = 0;
    int length = ssa.length();
    for (int i = 0; i < length; i++) {
        // For odd-length palindromes........
        
        
        totalcount += bounding(ssa, i, i);
        // For even-length palindromes.......
        totalcount += bounding(ssa, i, i + 1);
    }
    return totalcount;
}

int main() {
    string ssa = "ds";
    int ans = totalcouting(ssa);
    cout << "Total palindromic substrings: " << ans << endl;
}

