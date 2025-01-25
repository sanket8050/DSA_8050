 //// ------------------------searching key int the matrix array---------------------------
////-----------------------------------------O(n^2)-----------------------------------
////#include<iostream>
////using namespace std;
////
////bool findKey(int arr[][3],int row,int cols,int key){
////    
////    for(int i=0;i<3;i++){
////        for(int j=0;j<3;j++){
////            if(arr[i][j]== key){
////                return true;
////        	}	
////        }     
////	}
//// return false   ; 
////}
////
////int main(){
////    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
////    int row=3;
////    int cols=3;
////    int key;
////    cout<<"enter the key: ";
////    cin>>key;
////    
////    if(findKey(arr,row,cols,key)){
////        cout<<"present"<<endl;
////    }
////    else{
////        cout<<"absent"<<endl;
////    }
////}
//
//
//// ------------------------searching key int the matrix array---------------------------
////--------------------------------------O(n)-----------------------------------
//#include<iostream>
//using namespace std;
//
//void search(int arr[][4],int rows,int cols,int key){
//    int row =0 ;
//	int col = cols-1;
//    int count =0;
//    int a,b;
//    while(row<4 && col>=0){
//    if(arr[row][col]==key){
//        
//        count++;
//        a= row;
//        b= col;
//        cout<<"("<<a<<","<<b<<")"<<endl;
//        col--;
//        
//    
//        
//    }
//    else if (key < arr[row][col]){
//        col--;
//        
//    }
//    else{
//        row++;
//    }
//    
//    }
//    
//   cout<<count<<endl;
//   
//    //return false;
//}
//
//int main(){
//	int arr[4][4]={{1,2,3,11},
//	               {4,5,5,12},
//	                {9,9,9,13},
//	                {15,18,50,50}
//					};
//	int key = 55;
//	
//	search(arr,4,4,key);
//
//}



//--------------------------------search in matrix using binary search-------------------

#include<iostream>
using namespace std;

bool findelement(int arr[][4],int row,int col,int target){
    int s = 0;
    int e = row*col - 1;
    int ans=-1;
    
    while(s <= e){
        int mid = s +(e-s)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;
        
        if(arr[rowIndex][colIndex]==target){
            return true;
        }
        if( arr[rowIndex][colIndex] < target){
             s= mid+1;
          
        }
        else{
             e = mid-1;
        }
        
    }
    return false;
}

int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row = 5;
    int col = 4;
    int target ;
    cin>>target;
    int ans = findelement(arr,row,col,target);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}




// --------------------------min from array----------------------------


//#include<iostream>
//#include<limits.h>
//using namespace std;
//
//
//int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int row=3;
//    int cols=3;
//    int min= INT_MAX;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            if(min > arr[i][j]){
//                min=arr[i][j];
//                
//            }
//        }
//    }
//    cout<<min;
//}



//-------------------------- max in array----------------------------------------
//
//#include<iostream>
//#include<limits.h>
//using namespace std;
//
//
//int main(){
//    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//    int row=3;
//    int cols=3;
//    int max= INT_MIN;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            if(max < arr[i][j]){
//                max=arr[i][j];
//                
//            }
//        }
//    }
//    cout<<max;
//}

//------------------- declaration  and inititialize the 
                    // vector of vector-------------------------------------------------
                    
                 //   vector<vector<int> >arr(row,vector<int>(col,value))
                 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
//   vector<vector<int> >arr(5,vector<int>(5,9));
//    cout<<arr[3][2];
   vector<vector<int> >brr(5,vector<int>(7,5));
    
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    
}

