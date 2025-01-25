
//DIAGONAL SUM OF 2D ARRAY

#include<iostream>
using namespace std;

int diagonalsum(int arr[][3]){
    int sum=0;
    int n=3;  //-----------------------//size od array n*n 
    for(int i=0;i<n;i++){
        sum = sum + arr[i][i];
        
        if(i != n-1-i){
            sum = sum + arr[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int s=diagonalsum(arr);
    cout<<s<<" ";
}
