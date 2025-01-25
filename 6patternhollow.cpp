// ********
// *      *
// *      *
// *      *  
// *      * 
// *      *
// ********

#include<iostream>
using namespace std;
//int main ()
//{
//	for(int row=0;row<4;row=row+1)
//	{
//		if(row==0 || row==3)
//		{
//			for(int col=0;col<5;col++)
//			{
//				cout<<"*";
//			}
//		}
//		else	{
//		
//			cout<<"*";
//			for(int col=1;col<=3;col++)
//			{
//			cout<<" ";	
//			}
//			cout<<"*";	
//		}
//		
//	      	cout<<endl;
//	}



#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"no of rows";
	cin>>n;
	cout<<"no of col";
	int m;
	cin>>m;
	for(int i=0;i<n;i++){
	 
		for(int j=0;j<m;j++){
			if(i==0 || i==n-1 ||j==0  || j==m-1){
				cout<<"*";
			}
			else{
			cout<<" ";
			}
		
		}
			cout<<endl;
		}
}

