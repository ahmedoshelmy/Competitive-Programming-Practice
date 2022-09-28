class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = (int)a.size();vector<int> b = a; b[0]=a[0];
        for(int i = 1;i<n;i++) a[i]+=a[i-1];
        
        if(n==1) return a[0];
        int mn = 0 , ans =  INT32_MIN; bool positive = false;
        for(int i =0;i<n;i++){
            if(b[i]>=0) positive = true;
            ans = max(ans , a[i]-a[mn]);
            ans = max(ans , a[i]);
            if(a[i]<a[mn]) mn = i;
        }
        if(!positive) return *max_element(b.begin(),b.end());
        return max(ans,a[0]);
    }
};
