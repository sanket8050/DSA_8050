#include<iostream>
#include<math.h>
// find shortest path 

using namespace std;

float getdistance(string path){
    int x =0;                                                             
    int y =0;                                                             
    for(int i=0;i<path.length();i++){
        char dir = path[i];
        if(dir == 'N'){
            y++;
        }
        else if(dir == 'S'){
            y--;
        }
        else if(dir == 'E'){
            x++;
        }
         else{
             x--;
         }
        }
        int x2 = x*x;
        int y2 = y*y;
        return sqrt(x2 + y2);
    }
    
    int main(){
        string path ;
        cout<<"Enter the path eg.NWSEWS" <<endl;
        getline(cin,path);
        float ans =  getdistance(path);
        cout<<ans;
    }

