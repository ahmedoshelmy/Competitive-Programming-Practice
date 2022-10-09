class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size();
            int dp[m+5][n+5]; 
        for(int i = 0;i<m;i++) for(int j=0;j<n;j++) dp[i][j] = INT32_MAX;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i) dp[i][j] = min(dp[i-1][j] + grid[i][j],dp[i][j]);
                if(j) dp[i][j] = min(dp[i][j-1] + grid[i][j],dp[i][j]);
                if(dp[i][j] == INT32_MAX) dp[i][j] = grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};
