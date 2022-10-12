class Solution {
public:
    string si , ti ; 
    bool dp(int i , int j){
        if(j == ti.size()) return true;
        if(i == si.size()) return false;
        if(si[i]==ti[j]){
            return dp(i+1 , j+1);
        }else{
            return dp(i +1,j );
        }
}
    bool isSubsequence(string s, string t) {
       si = t , ti = s ; 
        return dp(0 , 0); 
    }
};
