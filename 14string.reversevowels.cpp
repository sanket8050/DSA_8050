#include<iostream>
#include<unordered_set>
#include<string>
#include<cctype>
using namespace std;

string reverVowels(string s){
    unordered_set<int> vowels ={'a','e','i','o','u','A','E','I','O','U'};
    int i =0;
    int j =s.length()-1;
    while(i < j){
     while( !vowels.count(s[i])){
        i++;
    }
    while( !vowels.count(s[j])){
        j--;
    }
    
    swap(s[i] , s[j]);
    i++;
    j--;
    }
    return s;
}

int main(){
    string s = "adio";
    string ans = reverVowels(s);
    cout<<ans;
}
