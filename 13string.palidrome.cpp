#include<iostream>
using namespace std;

int length(char arr[]){
	int count=0;
	int i=0;
	while(arr[i] != '\0'){
		i++;
		count++;
	}
	return count;
}
bool palimdrom(char arr[]){
	int i=0;
	int j=+ length(arr)-1;

	while(i<=j){
		if(arr[i] != arr[j]){
			return 0;
		}
		else{
			i++;
			j--;
		}
	}
	return 1;
}
int main(){
	char arr[100] = "())(";
	cout<<palimdrom(arr);
}