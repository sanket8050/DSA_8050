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

