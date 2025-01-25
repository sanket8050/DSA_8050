// -----------------decimal to binary------------------

//-------------------------------divisoin method

#include<iostream>
#include<cmath>
using namespace std;

int dectobin(int n){
    int i=0;
    int binary=0;
    while(n>0){
        int bit= n%2;
        binary = bit*pow(10,i)+binary;
        n=n/2;
        i++;
    }
    return binary;
    
}
// ------------------------------bitwise method  //interview 
int dectobin2(int n){
	int binary=0;
	int i = 0;
	while(n>0){
		int bit = n & 1;
		binary = bit*pow(10,i)+binary;
		n=n>>1;
		i++;
		
	}
	return binary;
}


int main(){
    int num;
    cin>>num;
    
//    int final=dectobin(num);
//    cout<<final<<endl;
    
    int final2=dectobin2(num);
    cout<<final2<<endl;    
}
