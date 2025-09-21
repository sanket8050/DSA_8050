#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1'000'000'007;

int main() {
    int c=100;
    // cin >> c;
    vector<long long> dp(c+1,0);  // long long to avoid overflow
    dp[0] = 1;

    for(int i = 1; i <= c; i++) {
        for(int j = 1; j <= 6; j++) {
            if(i-j >= 0){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }

    cout << dp[c] << endl;
    return 0;
}
