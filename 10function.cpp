// addition of two num by calling function


#include<iostream>
using namespace std;

int add(int x,int y){
	
	return x + y;
	
}

int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	//calling the funnction
	int sum = add(a,b);
		cout<<"sum is "<<sum<<endl;
	
}
