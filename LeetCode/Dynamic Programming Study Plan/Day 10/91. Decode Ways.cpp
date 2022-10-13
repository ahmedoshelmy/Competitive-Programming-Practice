class Solution {
public:
    string s ; int n ; 
    bool valid(string x){
        if(x.size()==1) return (x[0] - '0' > 0 && x[0] - '0' <=9);
        return (((x[0] == '1') && x[1]-'0' <=9 )|| ((x[0] == '2') && x[1]-'0' <=6 ));
    }
    int memo[101] ; 
    int dp(int i = 0 ){
        if(i>=n) return 1;
        int & ret = memo[i] ;
        if(~ret) return ret; 
        ret = 0 ;
            if(i<n-1 && valid(s.substr(i,2))) ret += dp(i+2 );
        if (valid(s.substr(i,1))) ret += dp(i+1);
        return ret; 
    }
    
    int numDecodings(string s) {
     this->s = s;  n = s.size();
        memset(memo , -1 , sizeof memo); 
        return dp();
    }
};
