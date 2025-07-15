/*
================================================================================
TITLE: Diamond Pattern with Hollow Center
================================================================================

DESCRIPTION:
This program prints a diamond pattern with a hollow center using asterisks (*).
The pattern consists of two parts: upper half and lower half, each with
decreasing/increasing number of asterisks and increasing/decreasing spaces.

LOGIC:
UPPER HALF (row < n):
- First part: (n-row) asterisks
- Middle part: (2*row+1) spaces
- Last part: (n+row) asterisks

LOWER HALF (row < n):
- First part: (row+1) asterisks
- Middle part: (2*n-2*row-1) spaces
- Last part: (row+1) asterisks

PATTERN EXAMPLE (n=5):
***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include <iostream>
    using namespace std;

    int main() {
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n-row;col++){
                cout<<"*";
            }
            for(int col=0;col<2*row+1;col++){
                cout<<" ";
            }
            for(int col=0;col<n+row;col++){
                cout<<"*";
            }
        cout<<endl;
        }
        
        for(int row=0;row<n;row++){
            for(int col=0;col<row+1;col++){
                cout<<"*";
            }
            for(int col=0; col<2*n-2*row-1;col++){
                cout<<" ";
            }
            for(int col=0;col<row+1;col++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

