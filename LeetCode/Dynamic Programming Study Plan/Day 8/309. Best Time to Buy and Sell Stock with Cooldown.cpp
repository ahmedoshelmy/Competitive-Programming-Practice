class Solution {
public:
    vector<int> a ; vector<vector<int>> memo;  int n  ; 
    int dp(int i , int val){
    if(i>=n) return 0 ; 
    int & ret = memo[i][val+1] ;
    if(~ret) return ret;  
    if(val == -1) {
        return ret = max(dp(i+1 , val ) , dp(i+1 , a[i]));
    }else return ret  = max(dp(i+1 , val) ,a[i] - val +  dp(i+2 , -1))  ;
}
    int maxProfit(vector<int>& prices) {
        a = prices ; n = prices.size(); int N = 1000;
        memo = vector<vector<int>> (n,vector<int>(5002,-1) ); 
        return dp(0 , -1) ;
    }
};
