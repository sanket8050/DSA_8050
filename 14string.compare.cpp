#include<iostream>
#include<string>
using namespace std;

// by creating compare function

bool compareString(string str1 , string str2){
	if(str1.length() != str2.length()){
		return false;
		
		for(int i=0;i<str1.length();i++){
			if(str1[i] != str2[i]){
				return false;
			}
		}
		return 1;
	}

}
int main(){
    string str1 = "sanket";
    string str2 = "Sanket";
   if(str1.compare(str2)==0){
       cout<<"same";
       
   }
   else{
       cout<<"not same";
   }
int a=compareString(str1,str2);
cout<<a;
}
