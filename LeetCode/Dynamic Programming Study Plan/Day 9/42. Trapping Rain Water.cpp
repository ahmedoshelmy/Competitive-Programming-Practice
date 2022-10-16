class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int dp_r [n+2] , dp_l[n+2]; dp_l[0] = height[0] , dp_r[n-1] = height[n-1] ;
        for (int i = 1; i < n; ++i) {
            dp_l[i] = max(dp_l[i-1] , height[i]);
            dp_r[n-i-1] = max(dp_r[n-i] , height[n-i-1]);
        }
        int ans = 0 ;
        for (int i = 1; i < n-1; ++i) {
            ans+= max(min(dp_l[i],dp_r[i]) -height[i], 0 );
        }
        return ans;
    }
};
