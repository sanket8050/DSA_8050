#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,1,2,1,3,5,1,1};
    int n = arr.size();
    int max_area = 0;    
    int l =0; int r = n-1;

    while(l < r){
        int width = r - l;
        int curr_height = min(arr[l],arr[r]);
        int curr_area = width*curr_height;

        max_area = max(max_area,curr_area);

        if(arr[l] < arr[r]){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<max_area;
}