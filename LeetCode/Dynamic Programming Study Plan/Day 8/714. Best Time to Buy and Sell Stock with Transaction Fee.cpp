class Solution{
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size(); int dp[n+5];
        memset(dp , 0 , sizeof dp);
        int mx = - prices[0] ; dp[0] = mx;
        for(int i =1;i<n;i++){
            dp[i] = max({dp[i - 1], prices[i] + mx - fee,0});
            mx = max(mx , dp[i] - prices[i]);
        }
        return max(0,dp[n-1]);
    }
};
