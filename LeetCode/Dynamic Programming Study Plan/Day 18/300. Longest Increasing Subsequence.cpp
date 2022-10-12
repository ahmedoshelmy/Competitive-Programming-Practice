class Solution {
public:
 int n;    
    vector<int> a;
    int memo[2508][2508];
int dp(int i , int last){
    int & ret = memo[i][last];
     if(~ ret) return ret; 
     if(i >= n ) return  0 ;
     if(a[i] > a[last])  ret =  max(1 + dp(i+1 , i),dp(i+1,last)) ;
     else  ret = dp(i+1 , last) ;
     return ret; 
}
    int lengthOfLIS(vector<int>& nums) {
        n = (int)nums.size();a = nums;
        int  ans = 1; 
       for(int i = 0 ;i<=n;i++){
           for(int j = 0;j<=n;j++) memo[i][j] = -1; 
       }
        for(int i = 0 ; i < n-1 ; i++){
            ans = max(ans , dp(i+1,i)+1);
        }
        return ans; 
    } 
};
