

// // find leap year

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    
    if(year%4==0){
        if(year%100==0){
            
            if(year%400==0){
                cout<<"leap year";
            }
            else{
                cout<<"not leap year"<<endl;
            }
            
        }
        else{
            cout<<"leap year"<<endl;
        }
    }
    else{
        cout<<"not leap year"<<endl;
    }
}


#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(year % 400){
        cout<<"leap year";
    }
    else if(year%100){
        cout<<"not leap year";
    }
    else if(year % 4){
        cout<<"leap year";
    }
    else{
        cout<<"not lap year";
    }
}