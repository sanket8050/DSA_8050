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

void  convert_uppr_to_lower(char arr[]){
	int n = strlen( arr);
	for(int i=0;i<n;i++){
		if(arr[i] >= 'A' && arr[i] <= 'Z'){
		
			arr[i] = arr[i] - 'A' + 'a';
		}
	
	}

}
int main(){
	char arr[100] = "SaDNJKBDC";
    convert_uppr_to_lower(arr);
	cout<<arr;
	
}
