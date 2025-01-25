#include<iostream>
using namespace std;

int findMax(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}

int main(){
	int x;
	cout<<"enter x"<<endl;
	cin>>x;                                       // int x,y,z;
	int y;                                        // cin>>x>>y>>z;
	cout<<"enter y"<<endl;
	cin>>y;

	int z;
	cout<<"enter z"<<endl;
	cin>>z;
	
	int maxnum = findMax(x,y,z);
	cout<<"maximum num is: "<<maxnum<<endl;
}
