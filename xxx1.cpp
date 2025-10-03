#include<iostream>
using namespace std;
#include<climits>
#include<vector>

int xxx(vector<int>aaa){
    int first = INT_MIN; ;
    int second = INT_MIN; ;
    
    for(int x : aaa){
        if(x > first ){
            second = first;
            first  = x;
        }
        else if(x > second && x <first){
            second = x;

        }
        else{
            continue;
        }
    }
    return second;

    
}
int main(){
    vector<int>aaa = {1,2,3,4,5,6};
    int x = xxx(aaa);
     cout<<x;
}