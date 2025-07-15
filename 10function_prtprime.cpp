/*
================================================================================
TITLE: Print Prime Numbers Up to Limit
================================================================================

DESCRIPTION:
This program prints all prime numbers up to a given limit.
It uses a function to check if each number is prime and prints
them with a counter.

LOGIC:
PRIME CHECKING FUNCTION:
- For each number n, check divisibility from 2 to sqrt(n)
- If any number divides n evenly, return false (not prime)
- If no divisors found, return true (prime)
- Optimized by checking only up to sqrt(n)

PRIME PRINTING ALGORITHM:
- Iterate from 2 to the given limit
- For each number, call isPrime() function
- If number is prime, print it with counter
- Increment counter for each prime found

PRIME NUMBER PROPERTIES:
- Prime numbers are greater than 1
- They have exactly two divisors: 1 and themselves
- 2 is the only even prime number
- All other primes are odd

OPTIMIZATION:
- Check only up to sqrt(n) instead of n-1
- If n has a factor > sqrt(n), it must have a corresponding factor < sqrt(n)
- This reduces time complexity from O(n) to O(sqrt(n))

EXAMPLE:
Input: limit = 20
Output:
prime num1: 2
prime num2: 3
prime num3: 5
prime num4: 7
prime num5: 11
prime num6: 13
prime num7: 17
prime num8: 19

PRIME NUMBERS UP TO 100:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

TIME COMPLEXITY: O(n × sqrt(n))
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    // Handle edge cases
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;  // Even numbers > 2 are not prime
    
    // Check odd numbers up to sqrt(n)
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Enter the limit: ";
    cin >> num;
    int count = 0;
    
    cout << "Prime numbers up to " << num << ":" << endl;
    for(int i = 2; i <= num; i++){
        if(isPrime(i)){
            cout << "prime num" << (++count) << ": " << i << endl;
        }
    }
    
    cout << "\nTotal prime numbers found: " << count << endl;
    
    // Test with examples
    cout << "\nTest cases:" << endl;
    cout << "isPrime(7): " << (isPrime(7) ? "true" : "false") << endl;
    cout << "isPrime(10): " << (isPrime(10) ? "true" : "false") << endl;
    cout << "isPrime(17): " << (isPrime(17) ? "true" : "false") << endl;
}


//output

//enter the limit: 100
//prime num1:2
//prime num2:3
//prime num3:5
//prime num4:7
//prime num5:11
//prime num6:13
//prime num7:17
//prime num8:19
//prime num9:23
//prime num10:29
//prime num11:31
//prime num12:37
//prime num13:41
//prime num14:43
//prime num15:47
//prime num16:53
//prime num17:59
//prime num18:61
//prime num19:67
//prime num20:71
//prime num21:73
//prime num22:79
//prime num23:83
//prime num24:89
//prime num25:97
