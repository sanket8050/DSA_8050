
// finding unique element in array by binary search

#include<iostream>
#include<vector>
using namespace std;


int solve(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    
    while(s <= e){
        int mid = s + (e-s)/2;
        // if there is only one element in array
        if(s==e){
            return s;
        }
        // classify according to mid is at even index or in odd
        if(mid % 2 == 0){
            // for even index
            if(arr[mid]==arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            //for odd index
            if(arr[mid]==arr[mid-1]){
                s = mid + 1 ;
            } 
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9,9};
    int ans = solve(arr);

}
