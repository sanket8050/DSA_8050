// Topic: Recursion, Pattern Printing
// Question: Write a recursive function to print a pattern of '#' characters in increasing order, where the first line has 1 '#', the second line has 2, and so on up to n lines. Implement a main function to call this recursive function for n = 4.
#include <iostream>

using namespace std;







void printPattern(int n) {
    if (n == 0) {
        return;
    }
    
    printPattern(n - 1); // Recursive call first
    for (int i = 0; i < n; i++) {
        cout << "#";
    }
    cout << endl;

    
}

int main() {
    int n = 4;
    printPattern(n);
    return 0;
}

