//  if arr[]={1,2,3,4,5,6}        //even no of elements
// then arr[]={1,6,2,5,3,4}


#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int start=0;
    int end=size-1;
    while(start<=end){
        if(start>end)
            break;
        if(arr[start]==arr[end])                  // odd element  condiotion 
            cout<<arr[start]<<" ";                // if not used then it print one element double
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
            
        }
        start++;
        end--;
    }
    
}
