#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    const int n = 1e8;

    // --- Without reserve ---
    vector<int> noReserve;
    auto start1 = high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        noReserve.push_back(i);
    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end1 - start1);
    cout << "Time without reserve: " << duration1.count() << " ms" << endl;

    // --- With reserve ---
    vector<int> withReserve;
    withReserve.reserve(n);  // <-- preallocate memory
    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < n; ++i) {
        withReserve.push_back(i);
    }
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(end2 - start2);
    cout << "Time with reserve:    " << duration2.count() << " ms" << endl;

    return 0;
}
