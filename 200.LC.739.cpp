#include<bits/stdc++.h>
using namespace std;

vector<int> warmer(vector<int>temp){
    int l = temp.size();
    vector<int>ans(l,0);

    for(int i =0 ;i < l;i++){
        for(int j = i+1;j<l;j++){
            if(temp[i] < temp[j]){
                ans[i] = j - i ;
                break;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {73,74,75,71,69,72,76,73};
    vector<int>x = warmer(arr);
    for(int x:x){
        cout<<x<<" ";
    }

}
