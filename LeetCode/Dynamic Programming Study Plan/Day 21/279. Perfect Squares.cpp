class Solution {
public:
    int n ;
    vector<int> memo ;
    int dp(int s = 0 ){
        if(s == n) return 0 ;
        int & ret = memo[s] ; if(~ ret) return ret;
        ret = 10002; int i = 1;
        while (s + i*i<=n)  ret = min(ret , dp(i*i+s) + 1), i++;
        return ret;
    }
    int numSquares(int ni) {
       n = ni;
       memo = vector<int>(n , -1);   
    return dp(); 
    }
};
