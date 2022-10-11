class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n]; dp[0][0] = 1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j] = 0;
                if(i) dp[i][j] +=(dp[i-1][j]);
                if(j) dp[i][j] +=(dp[i][j-1]);
                if(!i && !j) dp[i][j] =1;
            }
        }
        return dp[m-1][n-1];
    }
};
