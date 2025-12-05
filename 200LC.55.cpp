// jump game 
//yes r not

#include<bits/stdc++.h>
using namespace std;

bool jump(vector<int>&arr){
    int maxcango = 0;
    for(int i =0 ; i< arr.size();i++){
        if(i > maxcango)return false;
        maxcango = max(maxcango,arr[i]+i);
    }
    return true;

}
int main(){
    vector<int>arr = {3,2,1,1,4};
    bool x = jump(arr);
    cout<<x;
}