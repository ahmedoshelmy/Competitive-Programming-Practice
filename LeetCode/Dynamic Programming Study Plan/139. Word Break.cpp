class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size(); bool dp[n+5];  map<string,int> vis; 
        memset(dp, false, sizeof dp); dp[0] = true;
        for (auto u: wordDict) vis[u]++;
        for(int i = 0 ; i<n;i++){
            if(!dp[i])continue;
         for(int j = 1; i+j<=n;j++){
             if(vis[s.substr(i,j)]){
                 dp[i+j] = true;
             }
         }
        }
        return dp[n];
    }
};
