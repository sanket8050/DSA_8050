#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

const int NUM_BOTTLES = 1000;
const int NUM_PRISONERS = 10;

// Function to assign each bottle's poison to prisoners based on its binary
void assignBottlesToPrisoners(vector<vector<int>>& prisoner_bottles) {
    for (int bottle = 0; bottle < NUM_BOTTLES; ++bottle) {
        bitset<NUM_PRISONERS> binary(bottle);
        for (int i = 0; i < NUM_PRISONERS; ++i) {
            if (binary[i]) {
                prisoner_bottles[i].push_back(bottle); // Give drop to prisoner i
            }
        }
    }
}

// Simulate death based on which bottle is actually poisoned
bitset<NUM_PRISONERS> simulateDeath(int poisonedBottle) {
    return bitset<NUM_PRISONERS>(poisonedBottle);
}

int main() {
    vector<vector<int>> prisoner_bottles(NUM_PRISONERS);
    assignBottlesToPrisoners(prisoner_bottles);

    int poisonedBottle;
    cout << "Enter poisoned bottle number (0 - 999): ";
    cin >> poisonedBottle;

    if (poisonedBottle < 0 || poisonedBottle >= NUM_BOTTLES) {
        cout << "Invalid bottle number!" << endl;
        return 1;
    }

    // Simulate which prisoners die
    bitset<NUM_PRISONERS> deadPrisoners = simulateDeath(poisonedBottle);

    cout << "\nPrisoners who died (1 = dead, 0 = alive): " << deadPrisoners << endl;

    // Recover poisoned bottle from dead prisoners
    int identifiedBottle = (int)deadPrisoners.to_ulong();
    cout << "Identified poisoned bottle is: " << identifiedBottle << endl;

    if (identifiedBottle == poisonedBottle) {
        cout << "✅ Correct! Poisoned bottle identified successfully.\n";
    } else {
        cout << "❌ Incorrect. Something went wrong.\n";
    }

    return 0;
}
