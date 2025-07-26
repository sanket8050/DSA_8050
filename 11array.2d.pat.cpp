#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 4;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    int num = 1;
    
    // Fill diagonals from top-left to bottom-right
    for (int diagonal = 0; diagonal < 2 * n - 1; diagonal++) {
        if (diagonal < n) {
            // Upper half diagonals (including main diagonal)
            for (int i = 0; i <= diagonal; i++) {
                int row = i;
                int col = diagonal - i;
                matrix[row][col] = num++;
            }
        } else {
            // Lower half diagonals
            for (int i = diagonal - n + 1; i < n; i++) {
                int row = i;
                int col = diagonal - i;
                matrix[row][col] = num++;
            }
        }
    }
    
    // Print the matrix
    cout << "Matrix filled in diagonal order:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}