#include<iostream>
using namespace std;
#include<vector>

vector<int> xxx(vector<int>&aaa){
    int i =0 ;
    int l = aaa.size()-1;
    int mid = 0;
    while(mid <= l){
        if(aaa[mid] == 0){
            swap(aaa[i],aaa[mid]);
            i++;
            mid++;
        }
        else if(aaa[mid]==1){
            mid++;

        }
        else{
            swap(aaa[mid],aaa[l]);
            l--;
        }

         

         
        }
return aaa;
        
    
}
int main(){
    vector<int>aaa = {1,2,0,2,1};
    vector<int>xx = xxx(aaa);

    for(int c : xx){
        cout<<c <<" ";
    }



}