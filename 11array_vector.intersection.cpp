
// intersection of arrays

#include<iostream>
                  
#include<vector>

using namespace std;

int main(){
    vector<int>arr={1,3,2,4,5,6};
    vector<int>brr{1,3,6,9};
    vector<int>ans;
    
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                ans.push_back(element);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

