#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string>ban(banned.begin(),banned.end());

        for(char &c : paragraph){
            if(isalpha(c)){
                c = tolower(c);
            }
            else{
                c = ' ';
            }
        }

        stringstream ss(paragraph);
        string word;
        unordered_map<string,int>freq;
        while(ss >> word){
            if(ban.find(word)==ban.end()){
                freq[word]++;
            }
        }

        string  result;
        int max =0 ;
        for(auto&x : freq){
            if(x.second > max){
                max = x.second;
                result = x.first;
            }
        }
        return result;

    }};

    int main(){

        Solution obj ;

        string paragraph = "Bob hit a ball, the  BALL flew far it after   was ";
        vector<string>banned = {"ball"};
        string x = obj.mostCommonWord(paragraph,banned);

        cout<<x;
    }