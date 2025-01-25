// SQAURE ROOT FINDING OF ANY NUMBER  [NEARER VALUE]---------------------------------------------------------- 

#include<iostream>
using namespace std;

int findRoot(int n){
	
	int target=n;
	int s = 0;
	int e = n;
	int mid = (s+e)/2;
	int ans =-1;
	
	while( s <= e){
		if(mid*mid==target){
			return mid;
		}
		else if(mid*mid>target){
		     e = mid-1;
		}
		else {
			  // mid*mid< target
			  s = mid+1;
			  ans= mid; 
		}
		mid = (s+e)/2;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int root = findRoot(n);
	cout<<root;
	
	
	int presision;
	cin>>presision;
	
	double step = 0.1;
	double final = root;
	
	for(int i=0;i<presision;i++){
		
		for(double j=final;j*j<=n;j = j+step){
			final = j;
		}
		step = step / 10;
	}
	cout<<"final ans is "<<final;
}



//-----------------------find quotient---------------
#include<iostream>
using namespace std;

int finalans(int divisor ,int dividend){
   int s = 0;
   int e = dividend;
   int ans=0;
   
   while(s <= e){
       int mid = s+(e-s)/2;
       if(mid*divisor==dividend){
           return mid;
       }
       if(mid*divisor > dividend){
           e = mid -1;
       }
       else {
           ans = mid;
           s = mid + 1;
       }
   }
   return ans;
}

int main(){
   int divisor;
   cin>>divisor;
   int dividend;
   cin>>dividend;
   
   int answer = finalans(divisor,dividend);
   cout<<answer;
}
