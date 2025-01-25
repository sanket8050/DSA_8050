#include<iostream>
using namespace std;

int setBit(int bit, int k){
	
	return (bit | (1<<k));
}

int main(){
	int num;
	cin>>num;
	int k;
	cin>>k;
	int final=setBit(num ,k);
	cout<<final;
}
