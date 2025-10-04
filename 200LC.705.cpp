/*
===========================
 LeetCode 705: Design HashSet
===========================

📝 Problem:
We need to implement a **HashSet** (a set of integers) with 3 operations:
  - add(key) → insert key if not present
  - remove(key) → remove key if present
  - contains(key) → check if key exists

⚡ Main Idea:
We don’t have "built-in hashset" logic in C++, so we simulate it using:
   - **Hash Function** → key % size
   - **Buckets** → each bucket is a list (to handle collisions)

📌 Why bucket as a list?
If multiple keys map to same index → store them in a list (chaining).

-----------------------------------
🔑 Key Concepts:
1. Hash Function: 
   index = key % size
   (size is chosen as a prime number like 769 to reduce collisions)

2. Buckets:
   We maintain `vector<list<int>> buckets`
   - buckets[0], buckets[1], ..., buckets[768]
   - Each stores integers mapped by hash

3. Operations:
   - add(key) → compute index, check if already exists, if not add
   - remove(key) → go to index, erase key
   - contains(key) → go to index, search key

-----------------------------------
⏱ Complexity:
- Average O(1) per operation
- Worst O(n) if all keys fall into same bucket
- Space: O(n) (stores all inserted keys)

-----------------------------------
🧪 Dry Run:
hashSet.add(1)
   hash(1) = 1 % 769 = 1 → buckets[1] = [1]

hashSet.add(2)
   hash(2) = 2 % 769 = 2 → buckets[2] = [2]

hashSet.contains(1)
   hash(1) = 1 → found in bucket[1] → return true

hashSet.contains(3)
   hash(3) = 3 → bucket[3] empty → return false

hashSet.remove(2)
   hash(2) = 2 → remove from bucket[2]

hashSet.contains(2)
   bucket[2] empty → return false
*/


#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
private:
    vector<list<int>> buckets; // each bucket is a list (to handle collisions)
    int size;

    int hash(int key) {
        return key % size; // hash function
    }

public:
    MyHashSet() {
        size = 769;               // prime number reduces collisions
        buckets.resize(size);     // initialize 769 empty lists
    }

    void add(int key) {
        int idx = hash(key);
        for (int num : buckets[idx]) {
            if (num == key) return; // already exists
        }
        buckets[idx].push_back(key); // insert key in its bucket
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key); // list supports direct removal
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int num : buckets[idx]) {
            if (num == key) return true;
        }
        return false;
    }
};

// ---------------------- Driver code for testing -----------------------
int main() {
    MyHashSet hashSet;

    hashSet.add(1);
    hashSet.add(2);
    cout << hashSet.contains(1) << endl; // true (1 exists)
    cout << hashSet.contains(3) << endl; // false (3 not added)
    hashSet.add(2);
    cout << hashSet.contains(2) << endl; // true
    hashSet.remove(2);
    cout << hashSet.contains(2) << endl; // false (2 removed)

    return 0;
}
