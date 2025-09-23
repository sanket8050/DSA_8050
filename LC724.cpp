#include<vector>
#include<iostream>
using namespace std;

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

    vector<int>arr = {1,8,5,4,5};
    Solution obj;
    int x = obj.pivotIndex(arr);
    cout<<x;

}