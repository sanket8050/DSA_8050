/*
================================================================================
TITLE: Grade System Function
================================================================================

DESCRIPTION:
This program implements a complete grade system that assigns letter grades
based on numerical marks. It demonstrates conditional logic in functions
and proper grade categorization.

LOGIC:
GRADE ASSIGNMENT SYSTEM:
- Marks >= 90: Grade 'A' (Excellent)
- Marks >= 80: Grade 'B' (Good)
- Marks >= 70: Grade 'C' (Average)
- Marks >= 60: Grade 'D' (Below Average)
- Marks < 60: Grade 'F' (Fail)

FUNCTION IMPLEMENTATION:
- Function name: grade
- Parameter: int mark (numerical score)
- Return type: char (letter grade)
- Uses if-else conditions for grade assignment

GRADE SCALE:
- A: 90-100 (Excellent)
- B: 80-89 (Good)
- C: 70-79 (Average)
- D: 60-69 (Below Average)
- F: 0-59 (Fail)

EXAMPLE:
Input: mark = 85
Process: 85 >= 80 && 85 < 90 → Grade B
Output: "Final grade: B"

EDGE CASES:
- Marks > 100: Still returns 'A' (could add validation)
- Marks < 0: Returns 'F' (could add validation)
- Marks = 60: Returns 'D' (boundary case)

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

================================================================================
*/

#include<iostream>
using namespace std;

char grade(int mark){
    if(mark >= 90)
        return 'A';
    else if(mark >= 80)
        return 'B';
    else if(mark >= 70)
        return 'C';
    else if(mark >= 60)
        return 'D';
    else
        return 'F';
}

int main(){
    int mark;
    cout << "Enter your marks (0-100): ";
    cin >> mark;
    
    char finalGrade = grade(mark);
    cout << "Final grade: " << finalGrade << endl;
    
    // Test with different marks
    cout << "\nTest cases:" << endl;
    cout << "95 → " << grade(95) << endl;
    cout << "85 → " << grade(85) << endl;
    cout << "75 → " << grade(75) << endl;
    cout << "65 → " << grade(65) << endl;
    cout << "55 → " << grade(55) << endl;
}
