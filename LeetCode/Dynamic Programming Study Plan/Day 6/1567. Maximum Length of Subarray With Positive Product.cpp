class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ans = 0 ; int n =(int)nums.size();
        int dp[n+5][2]; // 0 for pos 1 for neg 
        for(int i =0;i<=n;i++) dp[i][0] = dp[i][1] = 0;
        if(nums[0] > 0) dp[0][0]=1;
        else if (nums[0] < 0) dp[0][1]=1;
        ans = dp[0][0];
        for(int i=1;i<n;i++){
               if(nums[i]>0){
                   dp[i][0] = dp[i-1][0] +1 ; 
                  if(dp[i-1][1]) dp[i][1] = dp[i-1][1] +1;
               }else if(nums[i]<0){
                   if(dp[i-1][1])dp[i][0] = dp[i-1][1] +1 ; 
                   dp[i][1] = dp[i-1][0] +1;
               }
            ans =max(ans , dp[i][0]);
        }
        return ans;
    }
};
