//*
//**
//***
//****
//*****
//******


#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=5;i++)
	{
	
		for(int j=0;j<i+1;j++)
		{
	
		cout<<"*";
		}
		cout<<endl;
		
		
	}
	
	
	
//take input from user
	int n;
	cout<<"enter no of row"<<endl;
	cin>>n;
	for(int row=0;row<n;row++)
	{
	
		for(int col=0;col<row+1;col++)
		{
	
		cout<<"*";
		}
		cout<<endl;
		
		
	}
	
}






