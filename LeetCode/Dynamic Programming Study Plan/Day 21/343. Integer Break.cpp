class Solution {
public:
map<pair<int,int> , int> memo ;
int product(vector<int> & v){
    if((int)v.size()==1) return  0 ;
    int ans = 1;
    for(auto & i:v ) ans*=i;
    return ans;
}
int n ;
int dp(int p  , int s)
{
    if(s==0) return p ;
    if(memo.find({p,s})!=memo.end()) return memo[{p,s}] ;
    int ret  = 0 ; bool f = s == n ;
    for(int i = 1; i<=(s-f);i++) ret = max(ret , dp(p*i , s-i));
    memo[{p,s}] = ret;
    return ret;
}
    int integerBreak(int ni) {
        n = ni;
        return dp(1,n);
    }
};
