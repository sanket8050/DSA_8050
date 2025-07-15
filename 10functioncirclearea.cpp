
/*
================================================================================
TITLE: Circle Area Calculator Function
================================================================================

DESCRIPTION:
This program calculates the area of a circle using a function.
It takes the radius as input and returns the area using the
mathematical formula πr².

LOGIC:
CIRCLE AREA FORMULA:
- Area = π × r²
- Where π ≈ 3.14 and r is the radius

FUNCTION IMPLEMENTATION:
- Function name: areaCircle
- Parameter: int r (radius)
- Return type: float (for decimal precision)
- Formula: 3.14 * r * r

FUNCTION WORKFLOW:
1. User inputs radius
2. Function calculates area using πr²
3. Returns the calculated area
4. Main function prints the result

MATHEMATICAL DETAILS:
- π (pi) is approximated as 3.14
- r² means radius squared (r × r)
- Result is in square units

EXAMPLE:
Input: radius = 5
Process: area = 3.14 × 5 × 5 = 3.14 × 25 = 78.5
Output: "area of circle: 78.5"

COMMON RADIUS EXAMPLES:
- r = 1: area = 3.14
- r = 2: area = 12.56
- r = 3: area = 28.26
- r = 4: area = 50.24

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

float areaCircle(int r){
	float area=3.14*r*r;
	return area;
}

int main(){
	int r;
	cout<<"enter the rad: "<<endl;
	cin>>r;
	
	float result = areaCircle(r);
	cout<<"area of circle: "<<result<<endl;
}
