class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size() , n = mat[0].size();
    int dp[m+1][n+1]; memset(dp , 0 , sizeof dp) ;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i][j-1] + mat[i-1][j-1] + dp[i-1][j] - dp[i-1][j-1];
        }
    }
    vector<vector<int>> ans(m , vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int lx  = max(0 , i-k),ly =  max(0,j-k), rx = min(m-1 , i+k) , ry= min(n-1 , j+k); 
            ans[i][j] = dp[rx+1][ry+1] - dp[lx][ry+1] - dp[rx+1][ly] + dp[lx][ly]  ; 
        }
    }
    return ans;
    }
};
