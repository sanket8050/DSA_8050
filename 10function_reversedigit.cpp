#include<iostream>
using namespace std;

int reversedigit(int num){
	int ans=0;
	int rem=0;
	bool isneg=false;
	if(num <0){
		isneg=true;
		num=-num;
	}
	
	while(num>0){ 
		int digit=num%10;
		ans=ans*10+digit;
		num=num/10;
		cout<<ans<<endl;
	}
	return ans;
	
}

int main(){
	int n;cin>>n;
	int final=reversedigit(n);
	cout<<final;
	
}
