/*
================================================================================
TITLE: Square Root Calculator using Binary Search
================================================================================

DESCRIPTION:
This program finds the square root of a number using binary search algorithm.
It includes both integer square root and decimal precision square root calculation.
Also includes a quotient finder using similar binary search approach.

LOGIC:
INTEGER SQUARE ROOT:
- Use binary search in range [0, n]
- If mid*mid == target: return mid
- If mid*mid > target: search in left half
- If mid*mid < target: search in right half, store mid as potential answer
- Return the largest integer whose square is less than or equal to target

DECIMAL PRECISION:
- Start with integer square root as base
- Use step size starting from 0.1
- For each precision level, find the largest number whose square ≤ target
- Reduce step size by factor of 10 for each precision level

QUOTIENT FINDER:
- Similar to square root but finds quotient = dividend/divisor
- Search in range [0, dividend]
- If mid*divisor == dividend: return mid
- If mid*divisor > dividend: search left
- If mid*divisor < dividend: search right, store mid as answer

EXAMPLE:
Input: n = 25, precision = 2
Output: 5.0 (integer), 5.00 (with precision)

TIME COMPLEXITY: O(log n) for integer part, O(precision) for decimal part
SPACE COMPLEXITY: O(1)

================================================================================
*/

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
