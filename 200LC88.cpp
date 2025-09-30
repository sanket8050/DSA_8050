#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(j>=0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
            
    }
};

int main(){
   vector<int>arr1= {1,2,34,5};
    int m = 4;
    vector<int>arr2= {54,34,5};
    int  n = 3;

   Solution obj ;
   obj.merge(arr1,m,arr2,n);

}