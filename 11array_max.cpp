#include<iostream>
#include<limits.h>                             // library
using namespace std;
int main(){
    
    int maxi = INT_MIN;                         // int_min give the possible smallest value to compare (-[2^31-1])
    int arr[]={2,5,78,5,45,86,1,0};
    for(int i=0;i<8;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"max num "<<maxi<<endl;
    
}
