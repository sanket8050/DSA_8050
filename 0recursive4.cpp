// Topic: Recursion, Fibonacci Sequence
// Question: Write a recursive function to print the first n terms of a generalized Fibonacci sequence, given the first two terms. The function should take n, t1, and t2 as input and print the sequence. Implement a main function to read n, t1, and t2 from the user and call the recursive function.

// fibonacci means  t1 = 2 ;
//                  t2 = 3 ; 

// sequence = 2,3,5,8,13,21

#include <iostream>

using namespace std;

void fibonacci(int n, int t1, int t2) {
    if (n == 0) {
        return;
    }
    cout << t1 << " ";
    fibonacci(n - 1, t2, t1 + t2);
}

int main() {
    int n, t1, t2;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the first two terms: ";
    cin >> t1 >> t2;

    fibonacci(n, t1, t2);
    cout << endl;

    return 0;
}

