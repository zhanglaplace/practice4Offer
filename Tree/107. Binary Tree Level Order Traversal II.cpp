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
        return max<int>(getDepth(root->left),getDepth(root->right))+1;
    }
    
    void getsolution(vector<vector<int>>& ret, TreeNode* root,int level){
        if(root == nullptr)
            return ;
        ret[level].push_back(root->val);
        getsolution(ret,root->left,level-1);
        getsolution(ret,root->right,level-1);
        
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ret;
        if(root == nullptr)
            return ret;
        int depth = getDepth(root);
        ret.resize(depth);
        getsolution(ret,root,depth-1);
        return ret;
    }
};