class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> prev ;
        prev.push_back({1}); 
        for(int i = 0;i<rowIndex;i++){
            vector<int> v ; v.push_back(1);
            for(int j = 0;j<(int)prev.size()-1;j++){
                v.push_back(prev[j]+prev[j+1]);
            }
            v.push_back(1);
            prev = v;
        }
        return prev;
    }
    
};
