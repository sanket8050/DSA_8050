
//-------------peak element and peak index of mountain array-----------------------

#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,3,4,500,4,3,2};
    int size= sizeof(arr)/sizeof(int);
    int s=0;
    int e = size-1;
    int mid=(s+e)/2;
    while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=(s+e)/2;
    }
    cout<<mid<<endl;
    cout<<"which is "<<arr[mid];
}
