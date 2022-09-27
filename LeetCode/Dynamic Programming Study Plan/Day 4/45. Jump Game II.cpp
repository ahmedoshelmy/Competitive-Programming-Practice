// Solution 1 DP

class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = INT32_MAX , n = (int)nums.size(); int mx_idx = 0;
        int dp[100000]; 
        for(int i =0;i<100000;i++) dp[i] = 1100000;
        dp[0] = 0; 
        for(int i =0 ;i<n;i++){
            for(int j =1; j+i <n && j<=nums[i];j++){
                dp[i+j] = min(dp[i+j] , dp[i]+1);
            }
            mx_idx = max(mx_idx , nums[i]+i);
        }
        return dp[n-1] ;
    }
};

// Solution 2 Greedt and Two Pointers

class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0 , n = (int)nums.size();
        int l = 0 , r = 0 ;
        while(r<n-1){
            int farthest = 0 ;
            for(int i=l;i<=r;i++) farthest = max(farthest , i+ nums[i]);
            l = r+1;
            r = farthest ;
            ans++;
        }
        return ans;
        
    }
};
