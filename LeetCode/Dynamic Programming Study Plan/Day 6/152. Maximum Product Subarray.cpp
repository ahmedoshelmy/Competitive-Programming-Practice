class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = (int)nums.size();
        int dp[n+1]; dp[0] = nums[0];
        for(int i=1;i<n;i++){
            dp[i] = nums[i];
            if(dp[i-1]) dp[i]*=dp[i-1];
        }
        int ans = INT32_MIN;
        for(int i =0;i<n;i++){
            int last_neg = -1; 
            if(nums[i]){
                int cnt = 0;  int last_neg = -1; int first_neg = -1;
                int  j = i; int prod = INT32_MIN;
                while(j<n&&nums[j]){
                    if(nums[j]<0) {
                     if(first_neg==-1) first_neg = j;
                        last_neg=j,cnt++;
                    }
                        j++;
                }
                prod = dp[j-1]/dp[i]*nums[i];
                if(cnt%2) {
                     if(last_neg-1>=0&&dp[last_neg-1])prod = max(prod,dp[last_neg-1]/dp[i]*nums[i]);
                     if(first_neg+1<n&&dp[first_neg+1])prod = max(prod , dp[j-1]/dp[first_neg+1]*nums[first_neg+1]);
                }
                ans = max(ans , prod);
                i = j-1;
            }else ans = max(ans,0);
        }
        return ans;
    }
};
