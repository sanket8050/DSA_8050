#include<iostream>
using namespace std;

void merg(int* arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k =s;
    for(int i =0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    int leftindex =  0;
    int rightindex = 0;
    int mainArrayindex = s;

    while(leftindex  < len1 && rightindex < len2){
        if(left[leftindex] < right[rightindex]){
            arr[mainArrayindex++] = left[leftindex++];
        }
        else{
            arr[mainArrayindex++] = right[rightindex++];
        }
       
        
    }
        while (leftindex < len1){
                arr[mainArrayindex++] = left[leftindex++];
            }

        while (rightindex < len2)
        {
            arr[mainArrayindex++] = right[rightindex++];
        }
        delete left;
        delete right;   
}

void merg_sort(int* arr,int s,int e){
    int mid = (s+e)/2;
    if(s>=e){
        return;
    }

    merg_sort(arr,s,mid);
    merg_sort(arr,mid+1,e);

    merg(arr,s,e);

}

int main(){

    int arr[]={20,454,8,1,14,58,12};
    int n = 7;
    int s = 0;
    int e = n-1;
    merg_sort(arr,s,e);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}