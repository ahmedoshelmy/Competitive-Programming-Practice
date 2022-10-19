class Solution {
public:
    string longestPalindrome(string s) {
        int mx = 0 ; string res;  int n = s.size();
        for(int i = 0; i<n;i++){
            int l = i, r = i ;
            while(l>=0 && r<n && s[l]==s[r]){
                 if(r-l+1 > mx) mx = r-l+1 , res = s.substr(l,mx) ; 
                l-- , r++ ;
            }
            l = i , r =i+1 ;
             while(l>=0 && r<n && s[l]==s[r]){
                 if(r-l+1 > mx) mx = r-l+1 , res = s.substr(l,mx) ; 
                l-- , r++ ;
            }  
        }
        return res;
    }
};
