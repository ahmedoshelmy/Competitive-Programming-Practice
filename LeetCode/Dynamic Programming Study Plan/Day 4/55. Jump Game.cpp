class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = (int) nums.size();
        int mx = 0 ; 
        for(int i = 0;i<n-1;i++){
            if(i<=mx)  mx = max(mx, nums[i]+i);
        }
        return mx>= n-1; 
    }
};
