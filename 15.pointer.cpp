#include<iostream>
using namespace std;
int main(){
    int  a = 5;
    int *p = 104;
    int *q = 108;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*a<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    cout<<&p<<endl;
    cout<<*q<<endl;
}