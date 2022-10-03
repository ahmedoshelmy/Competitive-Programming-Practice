class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        int n = (int)a.size();
        int pre [n+5]; pre[0] = a[0]  ;
        for (int i = 1; i < n; ++i) {
            pre[i] = max(pre[i-1] , a[i] + i);
        }int ans = INT32_MIN;
        for (int i = 1; i < n; ++i) {
            ans  = max(ans , pre[i-1] - i+a[i]);
        }
        return ans ;
    }
};
