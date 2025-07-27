// #include<iostream>
// #include<unordered_map>
// #include<sstream>

// using namespace std;


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
//         {"thousand",1000}
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

//             if(word == "hundred" ||  word=="thousand"){
//                 result += current;
//                 current = 0;

//             }
//         }
//     }
//    result += current;
//    return result;


// }

// int main(){
// 	int x = function("fifty six thousand six");
// 	cout<<x;
// }


#include<iostream>
#include<unordered_map>
#include<sstream>

using namespace std;


int function(int input){

    unordered_map<string , int>nummap = {

        {"zero",0},
        {"one",1},
        {"two",2},
        {"three",3},
        {"four",4},
        {"five",5},
        {"six",6},
        {"seven",7},
        {"eight",8},
        {"nine",9},
        {"ten",10},
        {"eleven",11},
        {"twelve",12},
        {"thirteen",13},
        {"forteen",14},
        {"fifteen",15},
        {"sixteen",16},
        {"seventeen",17},
        {"eighteen",18},
        {"nineteen",19},
        {"twenty",20},
        {"thirty",30},
        {"forty",40},
        {"fifty",50},
        {"sixty",60},
        {"seventy",70},
        {"eighty",80},
        {"ninety",90}
    };

    unordered_map<string,int>multiplyer = {
        {"hundred",100},
        {"thousand",1000}
    };

    int word;
    int x = input;
    int current =0;
    int result = 0;

    
    while(x >> word){
        
        if(nummap.count(word)){
            current += nummap[word];
		

        }
        else if(multiplyer.count(word)){
            current *= multiplyer[word];

            if(word == "hundred" ||  word=="thousand"){
                result += current;
                current = 0;

            }
        }
    }
   result += current;
   return result;


}

int main(){
	int x = function("fifty six thousand six");
	cout<<x;
}
