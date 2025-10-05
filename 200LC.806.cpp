#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> find(vector<int>widths, string s){

        int lines = 1;
        int width = 0;
        for(char c : s){
            int w = widths[c - 'a'];
            if(w + width > 100){
                lines++;
                width = w;
            }
            else{
                width += w;
            }
        }
        return {lines,width};
    }
};

int main(){
    Solution obj ;
    vector<int>aa = {4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string s = "bbbcccdddaaa";
    vector<int> x = obj.find(aa,s);
    for(int c : x){
        cout<<c<<" ";
    }
}