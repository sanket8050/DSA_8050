#include<iostream>
using namespace std;

int iprime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0 ){
			return false;
		}
		else{	
			return true;
		}
	}
}

int main(){
	int num;
	cout<<"enter the limit: ";
	cin>>num;
	int count;
	
	for(int i=2;i<=num;i++){
		bool final = iprime(i);
		if(final){
			
			cout<<"prime num"<<(++count)<<":"<<i<<endl;
			
		}
	}
}


//output

//enter the limit: 100
//prime num1:2
//prime num2:3
//prime num3:5
//prime num4:7
//prime num5:11
//prime num6:13
//prime num7:17
//prime num8:19
//prime num9:23
//prime num10:29
//prime num11:31
//prime num12:37
//prime num13:41
//prime num14:43
//prime num15:47
//prime num16:53
//prime num17:59
//prime num18:61
//prime num19:67
//prime num20:71
//prime num21:73
//prime num22:79
//prime num23:83
//prime num24:89
//prime num25:97
