#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int  l = nums.size();
        int result = 0;
       for(int i =0;i<=l;i++){
        result ^=i;

       }
       for(int x : nums){
        result ^= x;
       }
       return result;
       
    }
};

int main(){
    Solution obj;

    vector<int>arr = {0,1,2,3,4,5};
    int x = obj.missingNumber(arr);
    cout<<x;    
}