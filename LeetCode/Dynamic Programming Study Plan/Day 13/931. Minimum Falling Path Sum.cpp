class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int dp[102][102] ; int n = matrix.size();
        for(int i =0; i<n;i++)
            for (int j = 0; j < n; ++j) dp[i][j] = INT32_MAX;
        for(int i =0; i<n;i++){
            for(int j = 0; j<n;j++){
                if(i) dp[i][j] = min({dp[i-1][j],dp[i][j]});
                if(j&&i)dp[i][j] = min({dp[i][j],dp[i-1][j-1]});
                if(i&&j<n-1) dp[i][j] =min(dp[i][j],dp[i-1][j+1]);
                if(dp[i][j]==INT32_MAX) dp[i][j] = 0 ;
                dp[i][j] += matrix[i][j];
            }
            cout<<endl;
        }
        return * min_element (dp[n-1],dp[n-1]+n);
    }
};
