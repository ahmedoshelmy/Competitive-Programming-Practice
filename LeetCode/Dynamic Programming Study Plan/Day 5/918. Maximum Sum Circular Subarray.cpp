class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int s = 0; int mn_sum = a[0] , mx_sum = a[0] ;   int mn_temp = 0 , mx_temp = 0 ; int n = a.size(); int mx = a[0] ; 
        for (int i = 0; i < n; ++i) {
            s+=a[i]; mx_temp += a[i] , mn_temp +=a[i] ;
            if(mx_temp) mx_sum = max(mx_temp , mx_sum) ;
            if(mn_temp) mn_sum = min(mn_temp , mn_sum) ;

            if( mx_temp < 0 ) mx_temp = 0 ;
            if( mn_temp > 0 ) mn_temp = 0 ;

        }
        if(s == mn_sum) return mx_sum;
        return max(mx_sum, s - mn_sum) ;
    }
};
