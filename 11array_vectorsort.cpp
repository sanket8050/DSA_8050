///  sorting or saperating similar element in the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{0,1,0,1,1,1,0,0,1,1,0,1};
    // int start =0;
    // int i=0;
    // int end=arr.size()-1;
    
    // while(i!=end){
    //     if(arr[i]==0){
    //         swap(arr[i],arr[start]);
    //         i++;
    //         start++;
    //     }
    //     else{
    //         swap(arr[i],arr[end]);
                
    //             end--;
    //         }
    //     }
    sort(arr.begin(),arr.end());
    for(int k=0;k<arr.size();k++){
        cout<<arr[k]<<" ";
    }
    
}
