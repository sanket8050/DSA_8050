//leetcode 520. Detect Capital

#include<bits/stdc++.h>
using namespace std;
int detect(string s){
    int cap = 0 ;
     int n = s.size();
     for(char c : s){
            if(isupper(c)) cap++;

     }
     if(cap = 0)return 1;
     if(cap == 1 && isupper(s[0])) return 1;
     if(cap == n) return 1;
        return 0;
}