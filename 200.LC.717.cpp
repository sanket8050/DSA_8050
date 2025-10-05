
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&bits){
    int i = 0 ; 
    int l = bits.size();
    while(i < l-1){
        if(bits[i] == 1){
            i+=2;
        }
        else{
            i+=1;
        }

    }

    return i == l-1;
}
int main(){
    vector<int>xx = {1,1,0,0};
    bool d = check(xx);
    if(d){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}