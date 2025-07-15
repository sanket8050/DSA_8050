/*
================================================================================
TITLE: Decimal to Binary Conversion
================================================================================

DESCRIPTION:
This program converts decimal numbers to binary using two different methods:
1. Division method (traditional approach)
2. Bitwise method (more efficient, interview preferred)

LOGIC:

DIVISION METHOD (dectobin):
- Repeatedly divide by 2 and collect remainders
- Remainders form binary number in reverse order
- Use pow(10,i) to place digits in correct positions
- Continue until number becomes 0
                                                                    +
BITWISE METHOD (dectobin2):
- Use bitwise AND (&) with 1 to get last bit
- Use right shift (>>) to remove last bit
- More efficient than division
- Preferred in interviews

ALGORITHM STEPS:
1. Initialize binary = 0, i = 0
2. While n > 0:
   - Get last bit: n % 2 or n & 1
   - Add to binary: bit * 10^i + binary
   - Remove last bit: n = n / 2 or n >> 1
   - Increment i
3. Return binary

EXAMPLE:
Input: 13
Division method:
- 13 ÷ 2 = 6 remainder 1 → binary = 1
- 6 ÷ 2 = 3 remainder 0 → binary = 01
- 3 ÷ 2 = 1 remainder 1 → binary = 101
- 1 ÷ 2 = 0 remainder 1 → binary = 1101
Output: 1101

BITWISE METHOD:
- 13 & 1 = 1 → binary = 1
- 13 >> 1 = 6, 6 & 1 = 0 → binary = 01
- 6 >> 1 = 3, 3 & 1 = 1 → binary = 101
- 3 >> 1 = 1, 1 & 1 = 1 → binary = 1101

TIME COMPLEXITY: O(log n)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
#include<cmath>
using namespace std;

int dectobin(int n){
    int i=0;
    int binary=0;
    while(n>0){
        int bit= n%2;
        binary = bit*pow(10,i)+binary;
        n=n/2;
        i++;
    }
    return binary;
    
}
// ------------------------------bitwise method  //interview 
int dectobin2(int n){
	int binary=0;
	int i = 0;
	while(n>0){
		int bit = n & 1;
		binary = bit*pow(10,i)+binary;
		n=n>>1;
		i++;
		
	}
	return binary;
}


int main(){
    int num;
    cin>>num;
    
//    int final=dectobin(num);
//    cout<<final<<endl;
    
    int final2=dectobin2(num);
    cout<<final2<<endl;    
}
