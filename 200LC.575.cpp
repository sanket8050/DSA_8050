#include<iostream>
#include<vector>

#include<unordered_set>
using namespace std;

int givecandies(vector<int>&candy){

    int l = candy.size()/2;
    unordered_set<int>set(candy.begin(),candy.end());
    int m = set.size();

    int ans = min(l,m);
    return ans;

}

int main(){
    vector<int>aa = {1,1,2,2,3,3};
    int x = givecandies(aa);
    cout<<x;
}