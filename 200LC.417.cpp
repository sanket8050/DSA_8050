#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<double, vector<vector<int>>> findLargestTriangle(vector<vector<int>>& points) {
        int n = points.size();
        double maxArea = 0.0;
        vector<vector<int>> result(3);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

                    if (area > maxArea) {
                        maxArea = area;
                        result[0] = points[i];
                        result[1] = points[j];
                        result[2] = points[k];
                    }
                }
            }
        }

        return {maxArea, result};
    }
};

int main() {
    Solution obj;
    vector<vector<int>> arr = {{1,0},{5,2},{6,2},{9,5}};
    auto result = obj.findLargestTriangle(arr);
    double area = result.first;
    vector<vector<int>> largestTriangle = result.second;

    cout << "Largest Area: " << area << endl;
    cout << "Triangle coordinates:" << endl;
    for (auto &point : largestTriangle) {
        cout << "{" << point[0] << "," << point[1] << "} ";
    }
    cout << endl;
}
