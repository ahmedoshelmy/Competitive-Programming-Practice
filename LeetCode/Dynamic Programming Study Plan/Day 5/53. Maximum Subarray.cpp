// Solution 1

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

// Solution 2 

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = (int)a.size();
        int sum = 0 , ans =  INT32_MIN; bool positive = false;
        for(int i =0;i<n;i++){
            positive |= a[i] >=0 ;
            if(sum<0&&a[i]>=0) sum = a[i];
            else sum+=a[i];
            ans = max(sum,ans);
        }
        if(!positive) return *max_element(a.begin(),a.end());
        return ans;
    }
};
