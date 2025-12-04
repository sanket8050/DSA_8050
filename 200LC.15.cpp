//three sum 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> thresssum(vector<int>arr){
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;

        for(int i = 0 ;i <arr.size()-2;i++){
            int left = i+ 1; 
            int right = arr.size()-1;
            
            
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];

                if(sum == 0){
                ans.push_back({arr[i],arr[left] , arr[right]});
                while(left < right && arr[left] == arr[left+1])left++;
                while(left < right && arr[right] == arr[right-1])right--;
                left++;
                right--;

            }
            else if(sum < 0 ){
                left++;
            }
            else{
                right--;
            }
            }

        }
        return ans;
    } 
};

int main() {
    vector<int>arr = {1,-2,-3,4,5,6};
    Solution obj;
    vector<vector<int>> xx = obj.thresssum(arr);
    
  for(vector<int> &a : xx){
    for(int v : a){
        cout<<v<<" ";
    }
  }


    
}