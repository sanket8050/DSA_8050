 

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main() {
    int poisoned_bottle = 723;  // Suppose bottle #723 is poisoned

    // Step 1: Record which rats drink from which bottles
        vector<bool> rat_died(10, false);  // 10 rats

    for (int bottle = 0; bottle < 1000; bottle++) {
        bitset<10> mask(bottle);
        if (bottle == poisoned_bottle) {
            for (int rat = 0; rat < 10; rat++) {
                if (mask[rat]) {
                    rat_died[rat] = true;  // This rat dies
                }
            }
        }
    }

    // Step 2: Reconstruct poisoned bottle from dead rats
    bitset<10> result;
    for (int i = 0; i < 10; i++) {
        if (rat_died[i]) {
            result.set(i);
        }
    }

    cout << "Dead rats pattern: " << result << endl;
    cout << "Poisoned bottle was: " << result.to_ulong() << endl;

    return 0;
}

// 📋 Summary of bitset methods:
// Method	What it does
// set(i)	Sets bit i to 1
// reset(i)	Sets bit i to 0
// flip(i)	Toggles bit i (0→1, 1→0)
// test(i)	Returns true if bit i is 1
// to_ulong()	Converts the bitset to an integer
// to_string()	Converts bitset to string of bits


#include <iostream>
#include <bitset>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr;

    for (int i = 0; i < 1000; i++) {
        bitset<10> binary(i);
        arr.push_back(binary.to_string());
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}
