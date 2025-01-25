#include<iostream>
#include<string.h>
using namespace std ;
int main(){
//	char ch[10];
//	cin>>ch;                                  //if there is new line , space thent it will stop pring the array.
//	cout<<ch;                                 // thats why we use string function
	
	char name[10];
	
	cin.getline(name,10);
	cout<<name;
}
