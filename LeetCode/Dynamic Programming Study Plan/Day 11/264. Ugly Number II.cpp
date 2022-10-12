class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums(n);nums[0] =1 ; 
     int cnt = 1 ; int fives = 0 , twos = 0 , threes = 0 ; int ans =1 ;
     while(cnt<n){
         int f5 =5*nums[fives] , f3=3*nums[threes] , f2 = 2*nums[twos] ;
         int mn = min({f5,f3,f2});
         if(mn == f5) fives++; 
         if(mn == f3) threes++; 
         if(mn == f2) twos++; 
         nums[cnt] = mn; 
         cnt++;
     }
        return nums[n-1] ;
        
    }
};
