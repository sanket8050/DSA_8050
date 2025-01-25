 
 // FINDING THE TRAPPED WATER IN THE ARRAY FORMING GRAPH


#include<iostream>
#include<vector>
using namespace std;

int trappedX(vector<int>arr){
    int left=0;
    int right=arr.size()-1;
    int left_max=0;
    int right_max=0;
    int tr_w=0;
    
    while(left < right){
        if(arr[left] < arr[right]){
            left_max=max(left_max,arr[left]);
            tr_w += left_max - arr[left];
            left++;
        }
        else{
            right_max = max(right_max,arr[right]);
            tr_w += right_max - arr[right];
            right--;
        }
    }
    return tr_w;
}

int main(){
    vector<int> arr{3,2,1,0,1,2,3};
    int water = trappedX(arr);
    cout<<"trappd water "<<water;
    }
