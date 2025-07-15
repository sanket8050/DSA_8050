/*
================================================================================
TITLE: Leap Year Checker
================================================================================

DESCRIPTION:
This program checks whether a given year is a leap year or not using two different
approaches: nested if-else and sequential if-else if-else statements.

LEAP YEAR RULES:
A year is a leap year if:
1. It is divisible by 4 AND
2. It is NOT divisible by 100, OR
3. It is divisible by 400

LOGIC:
APPROACH 1 (Nested If-Else):
- Check if year % 4 == 0
  - If yes, check if year % 100 == 0
    - If yes, check if year % 400 == 0
      - If yes: leap year
      - If no: not leap year
    - If no: leap year
  - If no: not leap year

APPROACH 2 (Sequential If-Else):
- Check conditions in order of specificity
- More specific conditions first

EXAMPLES:
- 2020: Divisible by 4, not by 100 → leap year
- 1900: Divisible by 4, by 100, but not by 400 → not leap year  
- 2000: Divisible by 4, by 100, and by 400 → leap year

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    
    if(year%4==0){
        if(year%100==0){
            
            if(year%400==0){
                cout<<"leap year";
            }
            else{
                cout<<"not leap year"<<endl;
            }
            
        }
        else{
            cout<<"leap year"<<endl;
        }
    }
    else{
        cout<<"not leap year"<<endl;
    }
}


#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(year % 400){
        cout<<"leap year";
    }
    else if(year%100){
        cout<<"not leap year";
    }
    else if(year % 4){
        cout<<"leap year";
    }
    else{
        cout<<"not lap year";
    }
}