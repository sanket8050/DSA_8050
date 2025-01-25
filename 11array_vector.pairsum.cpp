// pair sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    
            //vector<int>arr{1,2,3,4,5};
    for(int i=0;i<5;i++){
        int element=arr[i];
        {
            for(int j=i+1;j<5;j++){
                if(element+arr[j]==5){
                    cout<<element<<":"<<arr[j]<<endl;
                }
            }
        }
    }
}
