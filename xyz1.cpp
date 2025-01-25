#include<iostream>
using namespace std;
int main()
{
	for(int i =0;i<5;i++)
	{
		if(i==0 || i==4)
		{
			for(int j=0;j<5;j++)
			cout<<"*";
		}
		else 
		{
			cout<<"*";
			for(int j=1;j<=3;j++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
			
		
		cout<<endl;
	}
	
}
