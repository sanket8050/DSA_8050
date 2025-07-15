/*
================================================================================
TITLE: Shortest Path in 2D Grid Using Direction String
================================================================================

DESCRIPTION:
This program calculates the shortest distance from origin (0,0) to the final
position after following a path described by direction characters (N, S, E, W).
It uses the Euclidean distance formula to find the straight-line distance.

LOGIC:
COORDINATE SYSTEM:
- Origin: (0, 0)
- N (North): y increases (+1)
- S (South): y decreases (-1)
- E (East): x increases (+1)
- W (West): x decreases (-1)

PATH TRACKING:
- Start at (0, 0)
- For each direction character, update coordinates
- Final position gives us the endpoint
- Calculate Euclidean distance from origin to endpoint

DISTANCE CALCULATION:
- Use Euclidean distance formula: √(x² + y²)
- This gives the straight-line distance from origin
- sqrt() function from <math.h> or <cmath>

ALGORITHM STEPS:
1. Initialize x = 0, y = 0
2. For each character in path:
   - N: y++
   - S: y--
   - E: x++
   - W: x--
3. Calculate distance = √(x² + y²)
4. Return the distance

EXAMPLE:
Input: "NWSEWS"
Output: 2.0

PROCESS:
- N: (0,1)
- W: (-1,1)
- S: (-1,0)
- E: (0,0)
- W: (-1,0)
- S: (-1,-1)
- Final position: (-1, -1)
- Distance: √((-1)² + (-1)²) = √2 ≈ 1.414

EDGE CASES:
- Empty string: distance = 0
- Single direction: distance = 1
- Circular path: may return to origin

TIME COMPLEXITY: O(n) where n is path length
SPACE COMPLEXITY: O(1) - only storing coordinates

================================================================================
*/

#include<iostream>
#include<math.h>
using namespace std;

float getDistance(string path){
    int x = 0;
    int y = 0;
    
    // Follow the path and update coordinates
    for(int i = 0; i < path.length(); i++){
        char dir = path[i];
        switch(dir){
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }
    }
    
    // Calculate Euclidean distance from origin
    int x2 = x * x;
    int y2 = y * y;
    return sqrt(x2 + y2);
}

int main(){
    string path;
    cout << "Enter the path (e.g., NWSEWS): ";
    getline(cin, path);
    
    float ans = getDistance(path);
    cout << "Shortest distance from origin: " << ans << endl;
    
    // Test with examples
    cout << "\nTest cases:" << endl;
    cout << "NWSEWS → " << getDistance("NWSEWS") << endl;
    cout << "NNNN → " << getDistance("NNNN") << endl;
    cout << "NSEW → " << getDistance("NSEW") << endl;
    cout << "NENENENE → " << getDistance("NENENENE") << endl;
}

