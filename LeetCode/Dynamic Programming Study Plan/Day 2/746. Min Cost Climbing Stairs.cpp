class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = (int)cost.size();
        int dp[n+7]; 
        for(int i=0;i<=n;i++) dp[i] = INT32_MAX ;
        dp[0] = 0 ; dp[1] = 0;
        for(int i=2;i<=n;i++) {
            dp[i] = min(dp[i-2] + cost[i-2] , dp[i-1]+cost[i-1]);
        }
        return dp[n];
    }
};
