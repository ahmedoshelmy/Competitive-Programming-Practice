class Solution {
public:
    int rob(vector<int>& nums) {
     int n = (int)nums.size();
        if(n <4) return *max_element(nums.begin(),nums.end());
        long long dp [n+5];
        dp[1]  = 0; dp[2] = nums[1];
        for(int i = 3; i<=n;i++){
            dp[i] = max(dp[i-1] , nums[i-1] + dp[i-2]) ;
        } int val1 = dp[n];
        long long dp2[n+5]; dp2[0] = 0  ,dp2[1] = nums[0];
         for(int i = 2; i<n;i++){
            dp2[i] = max(dp2[i-1] , nums[i-1] + dp2[i-2]) ;
        }
        int val2 = dp2[n-1] ;
        return max(val2,val1);
    }
};
