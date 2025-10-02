#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>matrixshaping(vector<vector<int>>&mat,int r,int c){

    int m = mat.size();
    int n = mat[0].size();

    int row = 0 ;
    int col = 0;

    vector<vector<int>>ans(r,vector<int>(c));

    if(r*c != m*n) return mat;

    for(int i = 0;i<m;i++){
        for(int  j =0;j<n;j++){
            ans[row][col] = mat[i][j];
            col++;

            if(col == c){
                col = 0;
                row++;
            }

        }
    }
    return ans;

}

int main(){

    vector<vector<int>>x = {{1,2,3,4},{2,3,4,5}};
    vector<vector<int>> c = matrixshaping(x,1,8);

    


}