#include<iostream>
using namespace std;
int product(int n,int i){
  
        if(i==0){
            return 1;
        }
        else{
            return n * product(n,i-1);
        }
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int a = product(n,i);
    cout<<a;
}
