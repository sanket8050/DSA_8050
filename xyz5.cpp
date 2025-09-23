#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size()-1;
        int ans = 0;
        
        for(int i =0;i<=n;i++){
            ans = ans*10 + digits[i];

        }
        


        
    }
};

int main(){
vector<int>arr = {9,9,9};
Solution obj;
obj.plusOne(arr);
	
	
}
