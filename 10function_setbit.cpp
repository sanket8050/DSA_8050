/*
================================================================================
TITLE: Set Bit Operation
================================================================================

DESCRIPTION:
This program implements a function to set a specific bit at position k
in a given number. It uses bitwise OR operation to set the k-th bit to 1.

LOGIC:
SET BIT ALGORITHM:
- Use bitwise OR operation: bit | (1 << k)
- 1 << k creates a mask with only the k-th bit set to 1
- OR operation sets the k-th bit to 1 regardless of its current value
- All other bits remain unchanged

BIT MANIPULATION:
- 1 << k: Shifts 1 by k positions to the left
- Example: 1 << 3 = 1000 (binary) = 8 (decimal)
- bit | mask: Sets the k-th bit to 1

EXAMPLE:
Input: num = 5 (binary: 101), k = 1
Process:
- 1 << 1 = 10 (binary) = 2 (decimal)
- 5 | 2 = 101 | 010 = 111 (binary) = 7 (decimal)
Output: 7

ANOTHER EXAMPLE:
Input: num = 10 (binary: 1010), k = 2
Process:
- 1 << 2 = 100 (binary) = 4 (decimal)
- 10 | 4 = 1010 | 0100 = 1110 (binary) = 14 (decimal)
Output: 14

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

int getBit(int bit, int k){
	return ((bit & (1<<k)) != 0);
}

int setBit(int bit, int k){
	
	return (bit | (1<<k));
}

int clearBit(int bit, int k){
	return (bit & ~(1<<k));
}

int updateBit(int bit, int k, int value){
	bit = clearBit(bit, k);
	return (bit | (value<<k));
}

int main(){
	int num;
	cin>>num;
	int k;
	cin>>k;
	int final=setBit(num ,k);
	cout<<final;
	cout<<getBit(num, k);
	cout<<clearBit(num, k);
	cout<<updateBit(num, k, 1);	
}
