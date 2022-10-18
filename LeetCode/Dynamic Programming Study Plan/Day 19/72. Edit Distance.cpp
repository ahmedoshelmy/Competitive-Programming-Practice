class Solution {
public:
 int n1 , n2 ; 
    string w1 , w2; 
    int memo[502][502]; 
int dp(int i , int j){
    if(j == n2)  return  n1 - i; 
    if(i == n1) return n2 - j ; 
    int & ret = memo[i][j] ;
    if(~ret) return ret; 
    if(w1[i] == w2[j]) return ret = dp(i+1, j+1);
    return ret =  1 + min({dp(i,j+1) , dp(i+1 , j) , dp(i+1,j+1)} );     // insert - delete - replace  
}
    int minDistance(string word1, string word2) {
        w1 = word1 , w2 = word2 , n1 = word1.size() , n2 = word2.size() ;
        memset(memo,-1 , sizeof memo) ;
        return dp(0 , 0) ;
    }
};
