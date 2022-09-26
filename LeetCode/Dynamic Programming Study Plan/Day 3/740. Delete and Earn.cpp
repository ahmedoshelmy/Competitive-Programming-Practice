class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = (int)nums.size();
        int dp[n+5]; 
        map<int,int> cnt,f;
        for (int i = 0 ; i<n;i++)cnt[nums[i]]++,f[nums[i]]++;
        vector<int> v;
        for(int i = 0;i<n;i++){
            if(cnt[nums[i]]) v.push_back(nums[i]) , cnt[nums[i]] = 0;
        }
        dp[1] = v[0]*f[v[0]] ; dp[0] = 0 ; 
        n = (int) v.size();
        for(int i =2;i<=n;i++){
        if(v[i-1] == v[i-2] + 1)  dp[i] = max(dp[i-1]  , dp[i-2] + v[i-1]*f[v[i-1]]);
        else dp[i] =( dp[i-1] + v[i-1]*f[v[i-1]]);
        }
        return dp[n];
        }
};
