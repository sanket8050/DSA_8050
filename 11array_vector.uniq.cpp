

#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int>arr;
	int size=5;
	int flag=0;
	                
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}	
	for(int j=0;j<size;j++){
		cout<<( flag ^ arr[j]);
	}
	
 }




