    typedef vector<int> vi;
typedef vector<vi> vvi;

class Solution {
public:
    string s ;  int  n ;
    vvi  memo;
    int dp(int l  , int r ){
        if(r-l==0) return 1;
        if(r-l<0) return 0 ;
        int & ret = memo[l][r] ;
        if(~ ret) return  ret;
        if(s[l] == s[r]) return ret = 2 + dp(l+1 , r-1) ;
        return ret = max(dp(l+1,r),dp(l,r-1));
    }
    int longestPalindromeSubseq(string sy) {
        s = sy ;n = (int)s.size();
        memo = vvi(n , vi(n,-1));
        return dp(0 ,  n-1) ;
    }
};
