

// reverse the  array 
// by  the inbuit function swap

#include<iostream>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int start=0;
    int end=6;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
