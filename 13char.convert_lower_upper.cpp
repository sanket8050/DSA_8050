#include<iostream>
using namespace std;
int strlen(char arr[]){
	
	int i=0;
	int count=0;
	while(arr[i] != '\0' ){
		count++;
		i++;
	}
	return count;
}

void  convert_lower_upper(char arr[]){
	int n = strlen( arr);
	for(int i=0;i<n;i++){
		if(arr[i] >= 'a' && arr[i] <= 'z'){
		
			arr[i] = arr[i] - 'a' + 'A';
		}
	
	}

}
int main(){
	char arr[100] = "Sanket";
    convert_lower_upper(arr);
	cout<<arr;
	
}
