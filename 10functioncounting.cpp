#include<iostream>
using namespace std;

int counting(int n){
	for(int i=1;i<=n;i++){
	 cout<<i<<endl;
	}
}


int main(){
	int n;
	cout<<"enter the limit :";
	cin>>n;
	counting(n);
	
}
//-----------------------by using while loop-------------

int main(){
	int n;
	//cin>>n;
	
	int a= 0;
	while(a<=n){
		cout<<++a;
		a++;
	}
}
