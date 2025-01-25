#include<iostream>
using namespace std;

int main(){
		// initialise the array and access the member
//	int arr[]={1,2,3,4,5,6,7};
//	cout<<arr[6]<<" ";
	
		// print all element of array
//	int brr[10]={1,3,6,4,7,8,9};
//	for(int i=0;i<10;i++){
//				
//		cout<<brr[i]<<" ";
//	}
	
	//take input from the user
	
	int crr[10];
	for(int i=0;i<10;i++){
		cin>>crr[i];
		
	}
	for(int j=0;j<10;j++){
		cout<<crr[j]<<" ";
	}
}

//---------------------negative at left and positive at right side--------------------------

//
#include<iostream>
using namespace std;
int main(){

int arr[]={2,4,-8,6,-7,4,-6};

int lowIndex=0;
int highIndex=sizeof(arr)/4;
    
while(lowIndex < highIndex)
	{
	if(arr[lowIndex] < 0){
		lowIndex++;
	      }	
	else if(arr[highIndex] > arr[lowIndex]){
		highIndex--;
	      }
	else{
		swap(arr[highIndex],arr[lowIndex]);
	    
	    lowIndex ++;
	    highIndex --;
	}
   }
    
    
    for(int i=0;i<6;i++){
    	cout<<arr[i]<<" ";
	}
    
    
}
#include<iostream>
using namespace std;
int main(){

int arr[]={2,4,-8,6,-7,4,-6};

int lowIndex=0;
int highIndex=sizeof(arr)/4;
    
while(lowIndex < highIndex)
	{
	if(arr[lowIndex] < 0){
		lowIndex++;
	      }	
	else if(arr[highIndex] > arr[lowIndex]){
		highIndex--;
	      }
	else{
		swap(arr[highIndex],arr[lowIndex]);
	    
	    lowIndex ++;
	    highIndex --;
	}
   }
    
    
    for(int i=0;i<6;i++){
    	cout<<arr[i]<<" ";
	}
    
    
}

//-------------------sort neg tive and positive

//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//    vector<int>arr{1,2,3,-4,-5,-6,7,8,9};
//    int start = 0;
//    int end = arr.size()-1;       // there -1 from the size of vector becoz last element will compare 
//                                  // with end of vector  means    (n-1 : n)
//    int xx=arr.size();
//    // int sort(arr.begin(),arr.end());
//    
//    while(start < end){
//        if(arr[start]<0){
//            start++;
//        }
//        else if(arr[end]>0){
//            end--;
//        }
//        else{
//            swap(arr[end],arr[start]);
//            start++;
//            end--;
//        }
//        
//    }
//     arr.push_back(100);
//    for(int i=0;i<arr.size();i++){
//        cout<<arr[i]<<" ";
//    }
//    
//}

//-----------------------------common element from three sorted arrays

// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n1=5;
//    int n2=6;
//    int n3=7;
//    
//    int i,j,k;
//    i=j=k=0;
//    int arr[]={1,2,3,14,15};
//    int brr[]={11,12,13,14,15,16};
//    int crr[]={14,15,17,18,22,34,45};
//    
//    
//    while(i<n1 && j<n2 && k<n3){
//        if(arr[i]==brr[j] && brr[j]==crr[k]){       // insted of arr=brr==crr
//            cout<<arr[i]<<" ";
//            i++;                                    // print then increment.....
//            j++;
//            k++;
//            
//        }
//        else if(arr[i]<brr[j]){
//            i++;
//        }
//        else if(brr[j]<crr[k]){
//            j++;
//        }
//        else{
//            k++;
//        }
//    }
//    
//}

