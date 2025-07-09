// Topic: Recursion, Printing Numbers
// Question: Write a recursive function to print numbers from 1 to n in increasing order. Implement a main function to call this recursive function for n = 10.

#include <iostream>

using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    printNumbers(10);
    return 0;
}

