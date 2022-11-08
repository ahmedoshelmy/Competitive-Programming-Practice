/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> dp;
    int getHeight(TreeNode * p) {
        if(!p)return  0 ;
        return max(1+getHeight(p->left),1+getHeight(p->right));
    }
    void findMax(TreeNode * p , int level){
    if(!p) return ;
    dp[level]+=p->val;
    findMax(p->left,level+1);
    findMax(p->right,level+1); 
        }
    int maxLevelSum(TreeNode* root) {
        int h = getHeight(root);
        dp = vector<int>(h+1);dp[0] = INT32_MIN;
        findMax(root,1);
        int mx = *max_element(dp.begin(), dp.end());
        for(int i = 1 ;i<=h;i++){
            if(mx == dp[i]) return i ;
        }
        return  0; 
    }
};

// Another BFS Solution 

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q; q.push(root); int ans = 1; 
        int s = 0 ; int mx_sum = INT32_MIN; int level = 1; 
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0 ; i<sz;i++){
                TreeNode* x = q.front();s+=x->val; 
                if(x->right)q.push(x->right);
                if(x->left)q.push(x->left);
                 q.pop();
            }
            if(s>mx_sum) ans = level,mx_sum = s; 
              s = 0,level++ ;
        }
        return ans;
    }
};
