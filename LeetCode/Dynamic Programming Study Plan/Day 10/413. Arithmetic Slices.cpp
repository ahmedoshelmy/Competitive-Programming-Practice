class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int n = (int) a.size(); long long ans = 0 ;
        for(int i = 1;i<n-1;i++){
            int len = 2 , diff = a[i] - a[i-1]; 
            while(i<n && a[i]-a[i-1]==diff) len++,i++;
            if(len>=3) ans +=(len-3) * (len-2) / 2,i--; 
        }
        return ans ;
    }
};
