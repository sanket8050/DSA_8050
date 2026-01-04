// validate num is poewer of 3

#include<bits/stdc++.h>
using namespace std;
int valide(int n){

    return n > 0 &&  1162261467 % n == 0;
}

// biggets 32 bit num divisible by 3

int validate(int n){
    if(n <=0)return false;
    while(n % 3 ==0){
        n/=3;
    }
    return n == 1;
}

int vali(int n){
    if(n <=0)return false;
    double x = log10(n)/log10(3);
    return x == (int)x; 
}