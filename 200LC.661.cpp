#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> imagesmoother(vector<vector<int>>&img){

        int r = img.size();
        int c = img[0].size();
        vector<vector<int>>ans(r,vector<int>(c,0));

        for(int i =0 ;i<r;i++){
            for(int j=0;j<c;j++){
                int sum =0;
                int count = 0;

                for(int ni = i-1;ni <= i+1;ni++){
                    for(int nj = j-1;nj <=j+1;nj++){

                        if(ni >=0 && ni < r && nj < c && nj >=0){
                            sum += img[ni][nj];
                            count++;
                        }
                       
                    }
                     
                }
                 ans[i][j] = sum/count;
               
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    vector<vector<int>>arr = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> x = obj.imagesmoother(arr);

    int r = arr.size();
    int c = arr[0].size();

    for(int i = 0 ;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}