
#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main() {
    int poisoned_bottle = 0;  // Suppose bottle #723 is poisoned

    // Step 1: Record which rats drink from which bottles
    vector<bool> rat_died(10, false);  // 10 rats

    for (int bottle = 0 ; bottle < 1000; bottle++) {
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
    cout << "Poisoned bottle was: " << result.to_ulong() <<" th:number" <<endl;

    return 0;
}

// 📋 Summary of bitset methods:
// Method	    What it does
// set(i)	    Sets bit i to 1
// reset(i)	    Sets bit i to 0
// flip(i)	    Toggles bit i (0→1, 1→0)
// test(i)	    Returns true if bit i is 1
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


/*
🧠 Complete Interview Answers for Poison Bottle Problem
1. Problem Variations
Q: What if you had 1000 bottles but only 3 rats?
A: Impossible to solve reliably. With 3 rats, you can only create 2³ = 8 different death patterns (000, 001, 010, 011, 100, 101, 110, 111). This means you can only distinguish between 8 bottles maximum. For 1000 bottles, you need at least ⌈log₂(1000)⌉ = 10 rats.

Q: What if you had 2000 bottles?
A: You need 11 rats because 2¹⁰ = 1024 < 2000, but 2¹¹ = 2048 > 2000. The algorithm remains the same - convert bottle numbers 0-1999 to 11-bit binary representations.

Q: What if 2 bottles were poisoned?
A: The simple binary approach fails because the death pattern would be the OR of two binary numbers, which isn't unique. For example, if bottles 3 (011) and 5 (101) are poisoned, the death pattern would be 111, which could also come from bottle 7 alone. This becomes a complex combinatorial problem requiring different approaches like group testing theory.

Q: What if you had N bottles and M rats?
A:

Solvable if: 2^M ≥ N
Formula: M ≥ ⌈log₂(N)⌉
Examples:
100 bottles → need 7 rats (2⁷ = 128)
500 bottles → need 9 rats (2⁹ = 512)
10,000 bottles → need 14 rats (2¹⁴ = 16,384)
2. Edge Cases
Q: What if bottle 0 is poisoned?
A: All rats survive because bottle 0 in binary is 0000000000. The death pattern is all zeros, which correctly identifies bottle 0. This is why 0-indexing works perfectly with binary representation.

Q: What if bottles are numbered 1-1000 instead of 0-999?
A: Two approaches:

Subtract 1: Convert to 0-999 internally, then add 1 to final result
Use 1001 states: Need 11 rats to handle numbers 1-1000, but this wastes one state
cpp
// Approach 1 (better)
int actual_bottle = result.to_ulong() + 1;  // Convert back to 1-indexed
Q: What if no bottle is poisoned?
A: All rats survive (death pattern = 0000000000), indicating bottle 0. If using 1-indexed bottles, this would be an invalid state that you'd need to handle specially.

3. Implementation Without STL
Q: Code this without using bitset
A:

cpp
#include<iostream>
using namespace std;

int main(){
    int poison = 987;
    bool rat_killed[10] = {false};
    
    // Convert poison to binary and kill rats
    for(int bit = 0; bit < 10; bit++){
        if(poison & (1 << bit)){  // Check if bit is set
            rat_killed[bit] = true;
        }
    }
    
    // Convert back to decimal
    int result = 0;
    for(int bit = 0; bit < 10; bit++){
        if(rat_killed[bit]){
            result |= (1 << bit);  // Set bit
        }
    }
    
    cout << "Poisoned bottle: " << result << endl;
    return 0;
}
Q: Implement using only arrays, no bit operations
A:

cpp
#include<iostream>
using namespace std;

void decimalToBinary(int num, int binary[10]){
    for(int i = 0; i < 10; i++){
        binary[i] = num % 2;
        num /= 2;
    }
}

int binaryToDecimal(int binary[10]){
    int result = 0;
    int power = 1;
    for(int i = 0; i < 10; i++){
        result += binary[i] * power;
        power *= 2;
    }
    return result;
}

int main(){
    int poison = 987;
    int rat_killed[10] = {0};
    int poison_binary[10];
    
    decimalToBinary(poison, poison_binary);
    
    // Kill rats based on binary representation
    for(int i = 0; i < 10; i++){
        rat_killed[i] = poison_binary[i];
    }
    
    int result = binaryToDecimal(rat_killed);
    cout << "Poisoned bottle: " << result << endl;
    return 0;
}
4. Complexity Analysis
Q: What's the time complexity?
A:

Feeding phase: O(N) where N is number of bottles (we check each bottle)
Decoding phase: O(M) where M is number of rats (constant 10)
Overall: O(N) - linear in number of bottles
Q: What's the space complexity?
A:

Rat tracking: O(M) = O(log N) space for rat death status
Temporary storage: O(log N) for binary representations
Overall: O(log N) - logarithmic in number of bottles
Q: Can you optimize the time complexity?
A: No, you must examine each bottle at least once to determine which rats should drink from it. O(N) is optimal.

5. Mathematical Proofs
Q: Prove that 10 rats are necessary and sufficient for 1000 bottles
A: Necessary (Lower Bound):

Each rat can be in 2 states (dead/alive)
M rats can create 2^M distinct patterns
Need 2^M ≥ 1000 to distinguish all bottles
Therefore M ≥ log₂(1000) ≈ 9.97
Since M must be integer, M ≥ 10
Sufficient (Upper Bound):

10 rats create 2¹⁰ = 1024 distinct patterns
1024 > 1000, so we can assign unique patterns to all bottles
The binary representation algorithm shows constructive proof
Q: Why does the binary approach guarantee uniqueness?
A: Every non-negative integer has a unique binary representation. Since we map each bottle number to its binary representation, and each binary pattern maps to a unique death pattern, we have a bijection (one-to-one mapping) between bottles and death patterns.

6. Real-World Constraints
Q: What if rats take 24 hours to die, and you need answer in 1 day?
A: This algorithm is designed for exactly this constraint. It's a single-round testing protocol:

Day 0: Feed rats according to binary patterns
Day 1: Check which rats died
Day 1: Decode the answer immediately
No multiple rounds needed, unlike binary search approaches.

Q: What if some rats might not die even from poison (reliability issues)?
A: This requires error-correcting codes. Options include:

Redundancy: Use more rats with duplicate bit positions
Hamming codes: Add parity bits to detect/correct errors
Majority voting: Use 3 rats per bit position, take majority result
Example with simple redundancy:

cpp
// Use 20 rats, 2 for each bit position
bool rat_killed[20];
int result = 0;
for(int bit = 0; bit < 10; bit++){
    // Majority vote between rat 2*bit and rat 2*bit+1
    if(rat_killed[2*bit] || rat_killed[2*bit+1]){
        result |= (1 << bit);
    }
}
Q: What if you need to find the poison with 99.9% confidence?
A: Use probabilistic approaches:

Multiple independent tests
Statistical analysis of death patterns
Bayesian inference to update probabilities
7. Advanced Extensions
Q: Extend this to find K poisoned bottles
A: Much more complex. The death pattern is the OR of K binary numbers. Possible approaches:

Inclusion-Exclusion Principle: Computationally expensive
Group Testing: Divide bottles into groups, test recursively
Adaptive Testing: Multiple rounds with feedback
For K=2, you need to solve: given OR of two unknown binary numbers, find both numbers. This is generally NP-hard.

Q: What if bottles can have different poison strengths?
A:

Binary poison: Original algorithm works
Graduated poison: Could use different death timings to encode more information
Quantitative poison: Measure degree of sickness, not just death
Q: Design a system for continuous monitoring
A:

Batch processing: Group bottles, test in batches
Rolling window: Continuously test new bottles
Hierarchical testing: Pre-screen with fewer rats, then detailed testing
8. Alternative Approaches
Q: Solve this without binary representation
A: All efficient solutions essentially rediscover binary representation:

Base-3 system: Use 3 states per rat (healthy/sick/dead) - needs more complex poison
Combinatorial approach: Choose which subsets of rats to poison - equivalent to binary
Graph theory: Map bottles to vertices, rats to edges - complex and inefficient
Q: What if you could test multiple times?
A: Binary search approach:

Round 1: Test bottles 0-499 vs 500-999
Round 2: Narrow down to 250 bottles
Continue until 1 bottle remains
Needs: ⌈log₂(1000)⌉ = 10 rounds, 1 rat
Trade-off: Time vs rats (10 rounds vs 10 rats)
9. Information Theory
Q: What's the information-theoretic lower bound?
A:

Information needed: log₂(1000) ≈ 9.97 bits
Information per rat: 1 bit (dead/alive)
Minimum rats: ⌈9.97⌉ = 10 rats
Our solution: Exactly 10 rats = optimal!
Q: How does this relate to error-correcting codes?
A:

Hamming distance: Each bottle differs from others in at least 1 bit
Error detection: Can detect if 1 rat's result is wrong
Error correction: Need additional parity bits
10. Code Debugging
Q: Find the bug in this code:
cpp
// Buggy version
for(int i = 0; i < 1000; i++){
    bitset<10> bottle_mask(i);
    if(poison == i){
        for(int j = 0; j < 10; j++){  // Bug: using j instead of i
            if(bottle_mask[j]){
                rat_killed[j] = true;
            }
        }
    }
}
A: No bug actually - using j is correct here because i is the bottle number and j is the rat number. The real bugs to watch for:

Using i for both loops (variable shadowing)
Wrong bit order (MSB vs LSB)
Off-by-one errors in array bounds
Common actual bugs:

cpp
// Bug 1: Variable shadowing
for(int i = 0; i < 1000; i++){
    for(int i = 0; i < 10; i++){  // BUG: reusing i
        // ...
    }
}

// Bug 2: Wrong bit order
bitset<10> result;
for(int i = 0; i < 10; i++){
    if(rat_killed[9-i]){  // BUG: reversing bits unnecessarily
        result.set(i);
    }
}
This comprehensive answer set covers all intellectual aspects an interviewer might explore!




what is stl and
why it is complex and have to handle saperate binary 1 to detectif we use 1 to 1000 isted of 0-999

Edit
Great questions! Let me explain both concepts clearly.

🔧 What is STL?
STL = Standard Template Library

STL is a collection of pre-written C++ classes and functions that provide common data structures and algorithms.

STL Components:
cpp
// Containers
vector<int> v;           // Dynamic array
list<int> l;             // Linked list
set<int> s;              // Sorted unique elements
map<string, int> m;      // Key-value pairs

// Algorithms
sort(v.begin(), v.end());     // Sorting
find(v.begin(), v.end(), 5);  // Searching

// Iterators
vector<int>::iterator it;     // For traversing containers

// Utility classes
bitset<10> b;            // Fixed-size bit array
pair<int, string> p;     // Two values together
Why Interviewers Ask "Without STL":
Test fundamental knowledge - Do you understand the underlying concepts?
Check if you can implement from scratch - Not just use pre-built tools
Simulate embedded/restricted environments - Some systems don't have STL
Assess problem-solving skills - Can you build the logic yourself?

STL vs No STL Comparison
Code 
🔢 Why 1-1000 is Complex vs 0-999
The complexity comes from binary representation alignment:

With 0-999 (Simple):
Bottle 0   → Binary: 0000000000 → All rats live
Bottle 1   → Binary: 0000000001 → Rat 0 dies
Bottle 2   → Binary: 0000000010 → Rat 1 dies
...
Bottle 999 → Binary: 1111100111 → Rats 0,1,2,5,6,7,8,9 die
With 1-1000 (Complex):
Bottle 1    → Binary: 0000000001 → Rat 0 dies
Bottle 2    → Binary: 0000000010 → Rat 1 dies
...
Bottle 1000 → Binary: 1111101000 → Rats 3,5,6,7,8,9 die
The Problems with 1-1000:

0-999 vs 1-1000 Indexing Comparison
Code 
🧠 Key Insights
Why 0-999 is Perfect:
Natural binary mapping - Every bottle maps directly to its binary representation
No wasted states - We use 1000 out of 1024 possible states efficiently
Clean edge cases - Bottle 0 naturally maps to "all rats survive"
Why 1-1000 is Problematic:
Missing state 0 - What if all rats survive? Invalid state!
Bottle 1000 overflow - 1000 needs 11 bits, but we only have 10 rats
Awkward mapping - Need constant offset calculations
The Bit Operations Explained:
cpp
// Check if bit i is set in number n
if (n & (1 << i)) {
    // Bit i is 1
}

// Set bit i in number n
n |= (1 << i);

// Examples:
// (1 << 0) = 1    = 0000000001
// (1 << 1) = 2    = 0000000010  
// (1 << 2) = 4    = 0000000100
// (1 << 3) = 8    = 0000001000
Memory Aid:
0-999: "Zero-indexed like arrays - natural for computers"
1-1000: "Human-indexed - needs translation layer"
The interviewer tests "without STL" to see if you understand that bitset is just a convenience wrapper around basic bit operations. The real algorithm is the bit manipulation, not the STL containers!







