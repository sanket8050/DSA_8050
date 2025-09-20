#include<iostream>
using namespace std;

int safest(int n,int k){
    int result = 0;
    if(n == 1)return 1  ;
    for(int i = 2;i<=n;i++){
        result = (result+k)%i;
    }
    return result +1;
}

int main(){
    int n =19;
    // cin>>n;
    int  k =2;
    // cin >> k;
    int ans = safest(n,k);
    cout<<"i will stand at: "<<ans ;
}