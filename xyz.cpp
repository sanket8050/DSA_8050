#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<7;i++){
		if(i==0 || i==6)
		for(int j=0;j<5;j++){
			cout<<" *";
		}
		
		else{
			cout<<"*";
			for(int j=0;j<=4;j++){
				cout<<" ";
			}
			cout<<" *";
		}
	cout<<endl;	
		
	}

}
