class Solution {
public:
    map<pair<int,int>,int> memo ; 
    int n , target;
    vector<int> a; 
    int dp(int i , int sum){
        if(sum == target) return 1 ; 
        if(sum>=target || i>=n)return  0 ;
        if(memo.find({i , sum})!= memo.end()) return memo[{i,sum}];
        int & ret = memo[{i,sum}];
        return ret = dp(i , sum + a[i]) + dp(i+1 , sum) ;
    }
    int change(int amount, vector<int>& coins) {
        n  = coins.size() ; target = amount ; a = coins;
        return dp(0 , 0 ); 
    }
};
