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

