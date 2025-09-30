#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  i = 0; 
        int  j = i + 1;
        int  l = nums.size();
        while(j < l){
            if(nums[i] == nums[j]){
                j++;
            }
            else if(nums[i] != nums[j]){
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;
        
    }
};

int main(){
    Solution obj ;
    vector<int>nums= {1,2,3,3,4,4,5,5,5,5,6};
    int x= obj.removeDuplicates(nums);
    cout<<x;
}