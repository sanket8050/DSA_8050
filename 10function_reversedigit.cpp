/*
================================================================================
TITLE: Reverse Digits of a Number
================================================================================

DESCRIPTION:
This program reverses the digits of a given integer number.
It handles both positive and negative numbers by temporarily converting
negative numbers to positive, reversing, and then applying the sign.


LOGIC:
DIGIT REVERSAL ALGORITHM:
- Extract digits from right to left using modulo operator (%)
- Build reversed number by multiplying previous result by 10 and adding new digit
- Continue until original number becomes 0

ALGORITHM STEPS:
1. Handle negative numbers:
   - Set flag isneg = true
   - Convert to positive: num = -num
2. While num > 0:
   - Extract last digit: digit = num % 10
   - Build reversed number: ans = ans * 10 + digit
   - Remove last digit: num = num / 10
3. Return result with appropriate sign

EXAMPLE:
Input: 12345
Process: 0 → 5 → 54 → 543 → 5432 → 54321
Output: 54321

Input: -123
Process: Convert to 123 → reverse to 321 → apply negative sign
Output: -321

TIME COMPLEXITY: O(log n) where n is the number of digits
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int reverse(int num){
    bool isneg;
    if(num < 0){
       isneg = true;
        num = -num;
    }
     int ans =0;
         
    while(num>0){
        
         int digit = num % 10;
         ans = ans* 10 + digit;
         num = num /10;
    }
    
   if(isneg){
       cout<<-ans;
   }
   else{
       cout<<ans;
   }
   return 0;
}
int main(){
    int num;
    cin>>num;
    reverse(num);
    
}
