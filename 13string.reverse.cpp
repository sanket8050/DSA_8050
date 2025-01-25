#include<iostream>
using namespace std;
int getlength(char name[]){
	int i=0;
	int length=0;
	while(name[i] != '\0'){
		length++;
		i++;
	}
	return length;
}
void reversestring(char name[]){
	
	int i=0;
	int j=getlength(name)-1;
	while(i<=j){
		swap(name[i],name[j]);
		i++;
		j--;
	}
}
void replacespace(char sentence[]){

	int j = getlength( sentence);
	for(int i=0;i<j;i++){
		if(sentence[i]== ' '){
			sentence[i] = '_';
		}
	}
	 
		
	}

int main(){
	char sentence[100];
	cin.getline(sentence,50);
	replacespace(sentence);
	cout<<sentence<<endl;
}
