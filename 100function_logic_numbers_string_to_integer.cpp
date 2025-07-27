/*
================================================================================
TITLE: Word to Number Converter
================================================================================

DESCRIPTION:
This program converts a number written in English words (e.g., "two thousand five hundred sixty six")
into its corresponding numeric value (e.g., 2566). It uses frequency mappings and place multipliers 
such as hundred and thousand to accurately compute the result.

LOGIC:
STRING TO NUMBER CONVERSION ALGORITHM:
- Map each word to its numeric value (e.g., "one" → 1, "twenty" → 20)
- Detect multipliers like "hundred" and "thousand"
- Multiply current subtotal when multipliers appear
- Sum final subtotal to result at the end

ALGORITHM STEPS:
1. Create a map for base number words
2. Create a map for multipliers like "hundred", "thousand"
3. Read words from input string using stringstream
4. If word is in base map → add to current
5. If word is a multiplier:
   - Multiply current by multiplier
   - If multiplier is "thousand" or "million", add current to result and reset current
6. Add leftover current to result after loop
7. Return the final result

EXAMPLE:
Input: "two thousand five hundred sixty six"
Process:
- "two" → 2
- "thousand" → 2 * 1000 = 2000 → result = 2000, current = 0
- "five" → 5
- "hundred" → 5 * 100 = 500
- "sixty" → 500 + 60 = 560
- "six" → 560 + 6 = 566
Final Result: 2000 + 566 = 2566

IMPORTANT NOTES:
- Words must be in lowercase
- Supports up to millions
- Doesn't support hyphenated words like "twenty-one" (can be extended)

TIME COMPLEXITY: O(n), where n = number of words
SPACE COMPLEXITY: O(1), uses fixed maps

================================================================================
*/

#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int wordsToNumber(string input) {
    unordered_map<string, int> numMap = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
        {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
        {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
        {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"thirty", 30},
        {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
        {"eighty", 80}, {"ninety", 90}
    };

    unordered_map<string, int> multiplier = {
        {"hundred", 100}, {"thousand", 1000}, {"lakh",100000},{"million", 1000000}
    };

    string word;
    istringstream iss(input);
    int current = 0, result = 0;

    while (iss >> word) {
        if (numMap.count(word)) {
            // Base number words like "two", "forty"
            current += numMap[word];
        } else if (multiplier.count(word)) {
            // For "hundred", "thousand", "million"
            current *= multiplier[word];

            // For larger multipliers, store partial result and reset current
            if (word == "thousand" || word == "million" || word =="lakh") {
                result += current;
                current = 0;
            }
        }
    }

    result += current; // add remaining value
    return result;
}

int main() {
    string input1 = "twelve thousand five hundred fifty six";
    string input2 = "sixty six million one lakh fifty five thousand ninety seven";

    cout << "Input: \"" << input1 << "\" → Output: " << wordsToNumber(input1) << endl;
    cout << "Input: \"" << input2 << "\" → Output: " << wordsToNumber(input2) << endl;

    return 0;
}




//---------------------------------------

// #include<iostream>
// #include<unordered_map>
// #include<sstream>
// #include<vector>
// #include<string>

// int function(string input){

//     unordered_map<string , int>nummap = {

//         {"zero",0},
//         {"one",1},
//         {"two",2},
//         {"three",3},
//         {"four",4},
//         {"five",5},
//         {"six",6},
//         {"seven",7},
//         {"eight",8},
//         {"nine",9},
//         {"ten",10},
//         {"eleven",11},
//         {"twelve",12},
//         {"thirteen",13},
//         {"forteen",14},
//         {"fifteen",15},
//         {"sixteen",16},
//         {"seventeen",17},
//         {"eighteen",18},
//         {"nineteen",19},
//         {"twenty",20},
//         {"thirty",30},
//         {"forty",40},
//         {"fifty",50},
//         {"sixty",60},
//         {"seventy",70},
//         {"eighty",80},
//         {"ninety",90}
//     };

//     unordered_map<string,int>multiplyer = {
//         {"hundred",100},
//         {"thousand",1000},
//         {"lakh",100000}
//     };

//     string word;
//     istringstream iss(input);
//     int current =0;
//     int result = 0;

    
//     while(iss >> word){
        
//         if(nummap.count(word)){
//             current += nummap[word];

//         }
//         else if(multiplyer.count(word)){
//             current *= multiplyer[word];

//             if(word == "hundred" ||  word=="thousand" || word "lakh"){
//                 result += current;
//                 current = 0;

//             }
//         }
//     }
//     return result;


// }
