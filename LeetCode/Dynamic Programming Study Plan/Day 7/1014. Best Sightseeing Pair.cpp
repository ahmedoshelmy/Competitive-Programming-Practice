class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        int n = (int)a.size();
        int mx = a[0]  ;int ans = INT32_MIN;
        for (int i = 1; i < n; ++i) {
            ans  = max(ans , mx - i+a[i]);
             mx = max(mx , a[i] + i);
        }
        return ans ;
    }
};
