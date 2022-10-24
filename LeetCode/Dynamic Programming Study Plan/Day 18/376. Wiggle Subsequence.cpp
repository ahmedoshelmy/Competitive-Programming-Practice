class Solution {
public:
    int memo[1000][1000][3]; int n ; 
    vector<int> a; 
int dp(int prev , int i , int inc){
    if(i>=n) return 0 ;
    int & ret = memo[prev+1][i][inc+1];
    if(~ret) return ret;
    if(inc == -1) return ret = max({dp(prev , i+1 , inc), 1+ dp(a[i] , i+1 ,1),1+ dp(a[i] , i+1 ,0)});
    if(inc){
        if (a[i]<=prev) return ret = dp(prev , i+1 , inc);
        return ret = max(  dp(prev , i+1 , inc), 1+ dp(a[i] , i+1 , 0));
    }else{
        if (a[i]>=prev) return ret = dp(prev , i+1 , inc);
        return ret = max(1+dp(a[i] , i+1 , 1), dp(prev , i+1 , inc));
    }
}
    int wiggleMaxLength(vector<int>& nums) {
        n = nums.size(); a = nums; 
        memset(memo , -1, sizeof memo) ;
        return dp(-1 , 0 , -1) ;
    }
};
