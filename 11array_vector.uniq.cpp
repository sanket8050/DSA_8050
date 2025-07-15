/*
================================================================================
TITLE: Find Unique Element Using XOR Operation
================================================================================

DESCRIPTION:
This program finds the unique element in an array where all other elements
appear twice except one. It uses the XOR (exclusive OR) operation to efficiently
identify the single element.

LOGIC:
XOR PROPERTIES FOR UNIQUE ELEMENT:
- XOR of a number with itself = 0 (a ^ a = 0)
- XOR of a number with 0 = the number (a ^ 0 = a)
- XOR is associative and commutative
- XOR of all elements: duplicates cancel out, unique remains

ALGORITHM STEPS:
1. Initialize result = 0
2. XOR all elements in array with result
3. Duplicate elements cancel out (a ^ a = 0)
4. Final result contains the unique element

MATHEMATICAL REASONING:
- If array = [a, b, a, c, b]
- Result = 0 ^ a ^ b ^ a ^ c ^ b
- Result = 0 ^ (a ^ a) ^ (b ^ b) ^ c
- Result = 0 ^ 0 ^ 0 ^ c = c

EXAMPLE:
Input: [1, 2, 3, 2, 1]
Output: 3

PROCESS:
- result = 0 ^ 1 = 1
- result = 1 ^ 2 = 3
- result = 3 ^ 3 = 0
- result = 0 ^ 2 = 2
- result = 2 ^ 1 = 3

KEY INSIGHTS:
- XOR is perfect for this problem
- No need for extra space
- Works only when all elements appear twice except one
- Very efficient O(n) solution

EDGE CASES:
- Empty array: returns 0
- Single element: returns that element
- All elements same: returns 0 (no unique element)

TIME COMPLEXITY: O(n) where n is array size
SPACE COMPLEXITY: O(1) - only using one variable

================================================================================
*/

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>& arr){
    int result = 0;
    
    // XOR all elements
    for(int num : arr){
        result ^= num;
    }
    
    return result;
}

int main(){
    vector<int> arr;
    int size = 5;
    
    cout << "Enter " << size << " numbers (one should be unique): ";
    
    // Input elements
    for(int i = 0; i < size; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    cout << "Array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
    
    int unique = findUniqueElement(arr);
    cout << "Unique element: " << unique << endl;
    
    // Test with predefined array
    cout << "\nTest cases:" << endl;
    
    vector<int> test1 = {1, 2, 3, 2, 1};
    cout << "Test 1: ";
    for(int num : test1) cout << num << " ";
    cout << "→ Unique: " << findUniqueElement(test1) << endl;
    
    vector<int> test2 = {4, 1, 2, 1, 2};
    cout << "Test 2: ";
    for(int num : test2) cout << num << " ";
    cout << "→ Unique: " << findUniqueElement(test2) << endl;
    
    vector<int> test3 = {7, 3, 5, 3, 5};
    cout << "Test 3: ";
    for(int num : test3) cout << num << " ";
    cout << "→ Unique: " << findUniqueElement(test3) << endl;
}




// AMCAT result 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> remove(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_map<int, int> freq1, freq2;
    vector<int> ans;

    // Count frequency
    for (int x : arr1) freq1[x]++;
    for (int y : arr2) freq2[y]++;

    // From arr1: add if not in arr2
    for (int y : arr1) {
        if (freq2[y] == 0) {
            ans.push_back(y);
        }
    }

    // From arr2: add if not in arr1
    for (int x : arr2) {
        if (freq1[x] == 0) {
            ans.push_back(x);
        }
    }

    return ans;
}

int main() {
    vector<int> arr1{1, 1,5, 6, 7};
    vector<int> arr2{9, 5, 7,1};

    vector<int> ans = remove(arr1, arr2);

    cout << "Unique elements: ";
    for (auto x : ans) {
        cout << x << " ";
    }

    cout << "\nLength: " << ans.size() << endl;
    return 0;
}



// maped

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq;
    vector<int> result;

    for (int num : nums1)
        freq[num]++;

    for (int num : nums2) {
        if (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }

    return result;
}


/*
nums1 = [1, 2, 2, 3]
nums2 = [2, 2, 3, 4]

freq: {
  1 → 1,
  2 → 2,
  3 → 1
}

Loop over nums2:
- 2 → freq[2] > 0 → add 2 → freq[2] = 1
- 2 → freq[2] > 0 → add 2 → freq[2] = 0
- 3 → freq[3] > 0 → add 3 → freq[3] = 0
- 4 → freq[4] = 0 → skip

Result: [2, 2, 3]


*/