#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int  l = nums.size();
       int totSum =0 ;
       int  left =0;
       
       for(int x : nums){
        totSum +=x;
       }

       for(int i = 0 ;i<l;i++){
        if(left == totSum - left-nums[i]){
            return i;
        }
        left += nums[i];
        
       }
       return -1;
        
    }
};

int main(){
    Solution obj ;
    vector<int>arr = {1,3,4,5};
    int x = obj.pivotIndex(arr);    
}