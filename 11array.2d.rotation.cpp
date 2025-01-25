#include<iostream>
using namespace std;

int main(){
	int i = 3;
	int j =3;
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for(int o=0;o<i;o++){
		for(int a=j-1;a>=0;a--){
			cout<<arr[a][o]<<" ";
		}
	cout<<endl;
	}
	
}
