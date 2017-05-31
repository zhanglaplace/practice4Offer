/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getDepth(TreeNode* root){
        if(root == nullptr)
            return 0;
        return max(getDepth(root->left),getDepth(root->right))+1;
    }
    
    void getValue(vector<vector <int>>& res,TreeNode* root,int level){
        if(root == nullptr)
            return ;
        res[level].push_back(root->val);
        getValue(res,root->left,level-1);
        getValue(res,root->right,level-1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        int depth = getDepth(root);
        if(depth == 0)
            return res;
        res.resize(depth);
        getValue(res,root,depth-1);
        return res;
    }
};