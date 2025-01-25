
//function call to find area of circle


#include<iostream>
using namespace std;

float areaCircle(int r){
	float area=3.14*r*r;
	return area;
}

int main(){
	int r;
	cout<<"enter the rad: "<<endl;
	cin>>r;
	
	float result = areaCircle(r);
	cout<<"area of circle: "<<result<<endl;
}
