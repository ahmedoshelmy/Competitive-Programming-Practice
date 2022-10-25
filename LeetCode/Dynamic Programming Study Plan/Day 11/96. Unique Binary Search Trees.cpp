class Solution {
public:
    vector<int> memo ;
    int nx ;
    int dp(int i){
        int ans = 0 ;
        for (int j = 1; j <=i ; ++j) {
            ans+=(memo[j-1] * memo[i-j]) ;
        }
        return ans;
    }
    int numTrees(int n) {
        nx = n ;
        memo = vector<int>(n+1);
        memo[0] = memo[1] = 1;
        for (int i = 2; i <=n ; ++i) {
            memo[i] = dp(i);
        }
        return memo[n];
    }
};
