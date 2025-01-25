
// ----------------printing spiral matrix-------------

#include<iostream>
using namespace std;


void printSpiral(int arr[][3]){
					  
	int row = 3;
	int col = 3; 
	int startrow=0;
	int endrow= row - 1;
	int startcol=0;
	int endcol= col - 1;
	
	while(startrow <= endrow && startcol <= endcol){
		for(int i=startcol; i<=endcol ; i++){
			cout<<arr[startcol][i]<<" ";
		}
		for(int j=startrow+1;j<=endrow;j++){
			cout<<arr[j][endcol]<<" ";
		}
		for(int i=endcol-1;i>=startcol;i--){
			cout<<arr[endrow][i]<<" ";
		}
		for(int j=endrow-1;j>=startrow+1;j--){
			cout<<arr[j][startcol]<<" ";
		}
		
		startrow++;
		endrow--;
		startcol++;
		endcol--;
	}
	cout<<endl;
}
int main(){
	
	int arr[3][3]={{1,2,3},
	               {4,5,6},
	                {7,8,9}
					};
    printSpiral(arr);
	
}
