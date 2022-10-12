class Solution {
public:
    string s,t;
    int memo[1002][1002];
    int dp(int i , int j){
        if(j == t.size()) return 0;
        if(i == s.size()) return 0;
        int & ret = memo[i][j] ;
        if(~ ret) return ret; 
        if(s[i]==t[j]){
            ret  =  1 + dp(i+1 , j+1);
        }else{
            ret =  max(dp(i,j+1),dp(i +1,j ));
        }
        return ret; 
}
    int longestCommonSubsequence(string text1, string text2) {
        s = text1  , t = text2 ; 
        for(int i = 0;i<=1000;i++)for(int j = 0;j<=1000;j++)memo[i][j] = -1;
        return dp(0,0);
    }
};
