#include<iostream>
#include<string.h>
using namespace std;

int getlength(char name[]){
	int i=0;
	int length=0;
	while(name[i] != '\0'){
		length++;
		i++;
	}
	return length;
}
int main(){
	char name[10];
	cin.getline(name,10);
	int ans=getlength(name);
	cout<<ans;
}
