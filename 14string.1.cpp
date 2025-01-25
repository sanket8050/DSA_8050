#include<iostream>
#include<string>
using namespace std;
int main(){
	string str ;
	//cin >>str;
	getline(cin,str);
//	cout<<str;
//	
//	cout<<" length of str :" << str.length() <<endl;
//	cout<<" check str is empty "<<str.empty()<<endl;
//	
//	str.push_back('A');
//	cout<<str<<endl;
	
	str.pop_back();
	cout<<str<<endl;
	cout<<str[1];
}
