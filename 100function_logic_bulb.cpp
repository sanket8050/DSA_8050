#include<bits/stdc++.h>
using namespace std;
int numberofbulbwillon(int n){
    int  i=1;
    int count =0;
    while(i*i<=n){
        count++;
        i++;
    }
    return count;
}

int main(){
    int n ; cin>>n;
    cout<<numberofbulbwillon(n);
    return 0;
}   



/*
================================================================================
TITLE: Light Bulb Switching Problem - Perfect Squares Count
================================================================================

DESCRIPTION:
This program solves the classic light bulb switching problem. Given n light bulbs
initially OFF, we perform n rounds of switching where in round i, we toggle every
i-th bulb. The program calculates how many bulbs will be ON after all rounds.

LOGIC:
BULB SWITCHING PATTERN:

Round 1: Toggle bulbs 1, 2, 3, 4, 5, ..., n
Round 2: Toggle bulbs 2, 4, 6, 8, 10, ... (every 2nd)  
Round 3: Toggle bulbs 3, 6, 9, 12, 15, ... (every 3rd)
Round i: Toggle bulbs i, 2i, 3i, 4i, ... (every i-th)

KEY INSIGHT:
- A bulb at position k will be ON if toggled ODD number of times
- Bulb k gets toggled once for each of its divisors
- Most numbers have EVEN divisors (pairs: 1×k, 2×(k/2), etc.)
- Only PERFECT SQUARES have ODD divisors (√k pairs with itself)

ALGORITHM:
Count perfect squares from 1 to n by checking i² ≤ n

MATHEMATICAL APPROACH:
Instead of simulation, we count perfect squares: 1², 2², 3², ..., k²
where k = floor(√n)

EXAMPLES:
n=9: Perfect squares are 1, 4, 9 → Answer: 3 bulbs ON
n=16: Perfect squares are 1, 4, 9, 16 → Answer: 4 bulbs ON
n=100: Perfect squares are 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 → Answer: 10

WHY PERFECT SQUARES WORK:
Bulb 12: Divisors {1,2,3,4,6,12} = 6 divisors (even) → OFF
Bulb 16: Divisors {1,2,4,8,16} = 5 divisors (odd) → ON (4 pairs with itself)

TIME COMPLEXITY: O(√n) - loop runs from 1 to √n
SPACE COMPLEXITY: O(1) - constant extra space

ALTERNATIVE SOLUTION: return (int)sqrt(n);

================================================================================
*/

#include<bits/stdc++.h>
using namespace std;

int numberofbulbwillon(int n){
    cout << "Calculating bulbs ON for n = " << n << endl;
    
    int i = 1;          // Start checking from 1
    int count = 0;      // Count of perfect squares (bulbs that will be ON)
    
    cout << "Perfect squares found:" << endl;
    
    while(i * i <= n){  // Check if i² ≤ n
        cout << i << "² = " << (i*i) << " ≤ " << n << " ✓" << endl;
        count++;        // Found a perfect square
        i++;           // Move to next number
    }
    
    if(i * i > n){
        cout << i << "² = " << (i*i) << " > " << n << " ✗ (Stop)" << endl;
    }
    
    return count;      // Return total count of bulbs ON
}

int main(){
    cout << "=== Light Bulb Switching Problem ===" << endl;
    cout << "Enter number of bulbs: ";
    
    int n; 
    cin >> n;          // Input: number of bulbs
    
    cout << "\n--- Solution Process ---" << endl;
    int result = numberofbulbwillon(n);
    
    cout << "\n--- Result ---" << endl;
    cout << "Number of bulbs that will be ON: " << result << endl;
    
    // Show mathematical verification
    cout << "\n--- Mathematical Verification ---" << endl;
    cout << "Using sqrt(" << n << ") = " << sqrt(n) << endl;
    cout << "Floor value: " << (int)sqrt(n) << endl;
    cout << "Matches our result: " << (result == (int)sqrt(n) ? "YES ✓" : "NO ✗") << endl;
    
    // Show which bulbs are ON
    cout << "\n--- Bulbs that are ON ---" << endl;
    cout << "Positions: ";
    for(int i = 1; i * i <= n; i++){
        cout << (i*i) << " ";
    }
    cout << endl;
    
    return 0;
}
