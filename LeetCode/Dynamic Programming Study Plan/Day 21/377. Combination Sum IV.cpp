#define clr(v, d)            memset(v, d, sizeof(v))
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
    long long dp[1002]; int s = 0 ;
        for(auto & u : nums)s+=u ;
        if(s == target) return 1; 
    for(int i = 1;i<=target;i++) dp[i] = 0 ;
    dp[0] = 1;
    for (int i = 0; i <=target ; ++i) {
        if(!dp[i]) continue;
        for(auto & u:nums)if(u+i<=target&&dp[i]<=INT32_MAX/2)dp[u+i]+=dp[i];
        cout<<dp[i]<<endl;
    }
    return dp[target];
    }
};
