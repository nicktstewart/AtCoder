#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <cmath>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>

using namespace std;


int main() {
    int n;
    cin >> n;
    int mod = 998244353;
    vector<vector<int>> dp(1111111,vector<int>(9));

    for (int i = 0; i < n; i++) {
        for(int j=0;j<9;j++){
            dp[i][j] = 0;
        }
    }
    for(int j=0;j<9;j++){
        dp[0][j] = 1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<9;j++){
            int add = dp[i][j] % mod;
            dp[i+1][j] = (dp[i+1][j] + add)%mod;
            if(j == 0 || j == 8){
                if(j==0)
                    dp[i+1][j+1] = (dp[i+1][j+1] + add)%mod;
                if(j==8)
                    dp[i+1][j-1] = (dp[i+1][j-1] + add)%mod;
            }else{
                dp[i+1][j+1] = (dp[i+1][j+1] + add)%mod;
                dp[i+1][j-1] = (dp[i+1][j-1] + add)%mod;
            }
        }
    }

    int ans = 0;
    for(int j=0;j<9;j++){
        ans += dp[n-1][j];
        ans = ans%mod;
    }
    cout << ans << "\n";

    return 0;
}





