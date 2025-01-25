#include<iostream>
using namespace std;

char grade(int mark){
	if(mark >= 90)
		return 'a';
}

int main(){
	char mark;
	cin>>mark;
	
	char final = grade(mark);
	cout<<"final grade"<<final;
}
