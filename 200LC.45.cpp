// jump game 2


#include<bits/stdc++.h>
using namespace std;
int jum(vector<int>&arr){
    for(int i = 1;i <arr.size();i++){
        arr[i] = max(arr[i]+i,arr[i-1]);
    }

    int index = 0 ;
    int ans = 0;

    while(index < arr.size() -1){
        ans++;
        index = arr[index];
    }
    return ans;
}

int main(){
    vector<int>arr = {1,2,3,4,5,2,1,2};
    int x = jum(arr);
    cout<<x;
}