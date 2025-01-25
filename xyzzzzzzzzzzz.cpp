                 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
//   vector<vector<int> >arr(5,vector<int>(5,9));
//    cout<<arr[3][2];
   vector<vector<int> >brr(5,vector<int>(7,5));
    
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    
}
