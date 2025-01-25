//1
//12
//123
//1234
//12345
//123456

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"take i/p"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j = 0;j<1+i;j++){
			//column+1
			cout<<j+1;
		}
		cout<<endl;
	}
}
