class Solution {
public:
    int climbStairs(int n) {
        long long dp[n+5]; 
        for(int i =0;i<=n;i++)dp[i] = 0 ;
        dp[0] =1;
        for(int i =0;i<=n;i++){
            dp[i+1]+=dp[i];
            dp[i+2]+=dp[i];
        }
        return dp[n];
    }
};
