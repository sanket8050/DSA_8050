#include<iostream>
using namespace std;

bool  evenodd(int a){
	if(  /*....(a%2==0)....*/   /*or*/  (a&1)==0)   {
		return true;                              // %is hard operater
	}
	else{
		return false;
	}
}

int main(){
	int x;
	cout<<"enter the num"<<endl;
	cin>>x;
	
	bool result = evenodd(x);
	if(result)
	{
		cout<<"even";
		}	
	else{
		cout<<"odd";
	}
	
}
