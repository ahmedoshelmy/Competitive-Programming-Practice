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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q; q.push(root); int level = 0 ;
        while(!q.empty()){
            int sz = q.size();
             int prev = 0; if(level%2) prev = INT32_MAX;
            bool isevenodd = true; TreeNode * x; 
            for(int i = 0 ; i<sz;i++){
                x = q.front(); q.pop();
                isevenodd &= (x->val)%2 != (level%2); 
                if(level%2) isevenodd &=  (x->val < prev); 
                else isevenodd &=( x->val > prev);
                prev  = x->val ;
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
            if(!isevenodd) return false;
           level++ ;
        }
        return true;
    }
};
