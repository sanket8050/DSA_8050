// linear search

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    int key;
    cin>>key;
    bool flag=0;
    // flag=1 -> present
    // flag=0 -> absent
 
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
            break;
            
            
        }
    }
    
    if(flag==1){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
