#include<iostream>
#include<string>
using namespace std;
#include<algorithm>



bool cmr(char a , char b){
    return a > b;
}

int main(){
    string s = "sanket";
    sort(s.begin(),s.end(),cmr);
    cout<<s<<" ";
}