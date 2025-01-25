// introduction to vector

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    // declaration of vector
    
    vector<int>arr(n);
    // add "6" in the array 
    
    arr.push_back(6);
    // print size of array
    
    cout<<arr.size()<<endl;                 // [0 0 0 0 0 6]   if initial is n=5
    // print whole capacity of vector which get doubled the initial
    
    cout<<arr.capacity()<<endl;             // [0 0 0 0 0 6 0 0 0 0]   capacity doubles the initial
	                                                                   // as per the property of vector.
	                                                                   
	cout<<arr.empty() <<endl;      // print in bool
	
	for(int i=0;i<arr.size();i++){
		
		cout<<arr[i]<<" ";
	}                                                                   																		
    return 0;                                
}
