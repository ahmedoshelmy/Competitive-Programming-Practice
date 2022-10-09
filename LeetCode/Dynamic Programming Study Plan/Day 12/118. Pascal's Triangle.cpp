class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        ans.push_back({1}); 
        for(int i = 0;i<numRows-1;i++){
            vector<int> v ; v.push_back(1);
            for(int j = 0;j<(int)ans[i].size()-1;j++){
                v.push_back(ans[i][j]+ans[i][j+1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};
