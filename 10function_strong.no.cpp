#include<iostream>
using namespace std;

int fact(int s){
    int factorial=1;
    for(int i=1;i<=s;i++){
        factorial= factorial*i;
    
    }
    
    return factorial;
}




int main(){
    int limit;
    cin>>limit;
    int s;
    for(int i=0;i<limit;i++){
     s = i;
        
    
 
    int a=0;
    int temp=s;
     while(temp>0){
         int digit = temp % 10;
          a =a + fact(digit);
         temp = temp/ 10;
         
     }
     if(s==a){
     cout<< a<<endl;
    }
}
}

