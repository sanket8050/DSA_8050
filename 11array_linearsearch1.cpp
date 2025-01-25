#include<iostream>
using namespace std;

int main(){
	     // 1 2 3 4 5 6 7 8 9 10.11.12
    int arr[]={1,1,1,1,1,0,0,0,0,1,1,0};
    int size = 12;
    int countOne=0;
    int countZeros=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            countOne++;
        }
        else{
            countZeros++;
        }
       
        
        
    }
     cout<<"no of ones"<<countOne<<endl;
        cout<<"no of zero"<<countZeros<<endl;
}




// in case of array arr[]={1,1,1,1,0,0,0,0,5,98,7,8}


//    for(int i=0;i<size;i++){
//    	if(arr[i]==1){
//    		countOne++;
//	    }
//	if(arr[i]==0){
//		countZeros++;
//	}
//    }
