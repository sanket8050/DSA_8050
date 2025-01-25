#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char ch='A';
	for(int i=0;i<n;i++){
		for(int chars=0;chars<i+1;chars++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}
