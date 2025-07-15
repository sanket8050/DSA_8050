
/*
================================================================================
TITLE: Strong Number Checker  or krishna murthi number
================================================================================

DESCRIPTION:
This program finds all strong numbers up to a given limit.
A strong number is a number whose sum of factorial of digits equals the number itself.

LOGIC:
STRONG NUMBER ALGORITHM:
- For each number from 0 to limit:
  - Extract each digit using modulo operation
  - Calculate factorial of each digit
  - Sum all factorials
  - If sum equals the original number, it's a strong number

FACTORIAL FUNCTION:
- Calculates factorial iteratively
- fact(n) = n × (n-1) × (n-2) × ... × 1

DIGIT EXTRACTION:
- Use modulo 10 to get last digit
- Divide by 10 to remove last digit
- Repeat until number becomes 0

EXAMPLE:
Input: limit = 1000
Output: 1, 2, 145

VERIFICATION:
- 1: 1! = 1 ✓
- 2: 2! = 2 ✓
- 145: 1! + 4! + 5! = 1 + 24 + 120 = 145 ✓

STRONG NUMBERS UP TO 10000:
1, 2, 145, 40585

TIME COMPLEXITY: O(n × d × d!) where n=limit, d=digits
SPACE COMPLEXITY: O(1)

================================================================================
*/
#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0){
        return 1;
    }
    if(num < 0){
        return -1;
    }

    int factorial = 1;
    for(int i =1 ;i<=num;i++){
        factorial = factorial*i;
    }
    return factorial;
}
int find(int num){
    int sum = 0;
    while(num>0){
        int temp = num;
        int digit = num%10;
        sum = sum + fact(digit);
        num = num/10;
    }
    
    return sum;
}

int main(){
    int limit;
    cin>>limit;
    for(int i=1;i<limit;i++){
        
        int temp = i;
        int sum = find(i);


        if(sum == temp){
            cout<<temp<<endl;
        }
    }
}











#include<iostream>
using namespace std;

int fact(int s){
    int factorial=1;
    for(int i=1;i<=s;i++){
        factorial= factorial*i;
    
    }
    
    return factorial;
}




int main(){
    int limit;
    cin>>limit;
    int s;
    for(int i=0;i<limit;i++){
        s = i;
        int a=0;
        int temp=s;
        while(temp>0){
            int digit = temp % 10;
            a = a + fact(digit);
            temp = temp/ 10;
            
        }
        if(s==a){
        cout<< a<<endl;
        }
    }
}

