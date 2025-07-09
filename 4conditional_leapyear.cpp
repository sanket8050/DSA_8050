// Topic: Conditional Statements, Leap Year Check
// Question: Write a program to check whether a given year is a leap year or not using conditional statements. Implement two different approaches for the leap year check.
// This code demonstrates two methods to determine if a year is a leap year.
// The first uses nested if-else, the second uses sequential if-else if-else.

// // find leap year


// 2020: Divisible by 4, not by 100 → leap year.
// 1900: Divisible by 4, by 100, but not by 400 → not leap year.
// 2000: Divisible by 4, by 100, and by 400 → leap year.


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