// Topic: Recursion, Exponentiation
// Question: Write a recursive function to calculate the value of n raised to the power i (i.e., n^i). The function should take two integers, n and i, as input and return the result using recursion. Implement a main function to read n and i from the user, call the recursive function, and print the result.
#include<iostream>
using namespace std;
int product(int n,int i){
  
        if(i==0){
            return 1;
        }
        else{
            return n * product(n,i-1);
        }
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int a = product(n,i);
    cout<<a;
}
