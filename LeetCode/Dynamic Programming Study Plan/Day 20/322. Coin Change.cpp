class Solution {
public:
    int target,n ; 
    vector<int> memo,nums;
    int dp(int sum ){
        if(sum == target) return 0;
        if(sum > target) return 10000 ;
        int & ret = memo[sum] ;
        if(~ ret) return ret;
        ret = 10001;
        for(int i =0;i<n;i++){
            if(nums[i]<=target && nums[i]+sum <= target)
            ret = min (ret , 1 +  dp(nums[i] + sum) );
        }
        return ret;
    }
    int coinChange(vector<int>& coins,int amount) {
         n = coins.size(); target = amount;
        nums = coins;
        memo = vector<int> (amount+5,-1);
        int ans = dp(0);
        if(ans > 10000) ans = -1; 
        return ans;
    }
};
