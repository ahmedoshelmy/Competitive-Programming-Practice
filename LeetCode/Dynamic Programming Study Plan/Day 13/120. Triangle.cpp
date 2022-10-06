class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans = 0;
        int n = triangle.size();
        int m = 1;
        int dp[201][201];
        for(int i = 0;i<n;i++)
            for(int j = 0;j<n;j++) dp[i][j] = INT32_MAX;
        for(int i = 0;i<n;i++){
            ans = INT32_MAX;
            for(int j = 0;j<m;j++){
                if(i&&j) dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]);
                else if(i) dp[i][j] = min(dp[i][j],dp[i-1][j]);
                else dp[i][j] = 0;
                dp[i][j] += triangle[i][j];
                ans = min(ans , dp[i][j]);
                cout<<dp[i][j]<<" ";
            }
             cout<<endl;
            m++;
        }
       
        return ans;
    }
};
