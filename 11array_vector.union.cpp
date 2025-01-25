
// print union of two array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,4};
    int sizea=3;
    int brr[]={4,6,8,0};
    int sizeb=4;
    
    vector<int>ans;
    for(int i=0;i<3;i++){
        ans.push_back(arr[i]);
     
    }
    for(int i=0;i<sizeb;i++){
       ans.push_back(brr[i]);
       }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
