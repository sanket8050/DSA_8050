/*
================================================================================
TITLE: Inverted Full Pyramid Pattern
================================================================================

DESCRIPTION:
This program prints an inverted full pyramid pattern using asterisks (*).
It creates a downward-pointing triangle with decreasing number of
asterisks in each row and increasing leading spaces.

LOGIC:
INVERTED PYRAMID ALGORITHM:
- For each row i:
  - Print leading spaces: i spaces
  - Print asterisks: n-i asterisks with spaces between them
  - Each asterisk is followed by a space

PATTERN FORMATION:
- Row 0: 0 spaces + 5 asterisks = "* * * * *"
- Row 1: 1 space + 4 asterisks = " * * * *"
- Row 2: 2 spaces + 3 asterisks = "  * * *"
- Row 3: 3 spaces + 2 asterisks = "   * *"
- Row 4: 4 spaces + 1 asterisk = "    *"

MATHEMATICAL RELATIONSHIP:
- Leading spaces: i
- Number of asterisks: n-i
- Total characters per row: i + 2*(n-i) - 1

PATTERN EXAMPLE (n=5):
* * * * *
 * * * *
  * * *
   * *
    *

EXAMPLE:
Input: n=5
Output: 5-row inverted pyramid

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/
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

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<i;j++){
    		
    		cout<<" ";
		    }
		for(int j=0;j<n-i;j++){
		
		cout<<"* ";
		}
			cout<<endl;
		
	
	}

	    
    }



