#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<string> findrank(vector<int>& score) {
        int l = score.size();
        vector<string> ans(l);

        priority_queue<pair<int,int>> pq;

        for (int i = 0; i < l; i++) {
            pq.push({score[i], i});
        }

        int rank = 1;
        while (!pq.empty()) {
            int idx = pq.top().second;
            pq.pop();

            if (rank == 1) ans[idx] = "Gold Medal";
            else if (rank == 2) ans[idx] = "Silver Medal";
            else if (rank == 3) ans[idx] = "Bronze Medal";
            else ans[idx] = to_string(rank);

            rank++;
        }

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5};
    vector<string> ans = obj.findrank(arr);

    // print output
    for (string s : ans) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
