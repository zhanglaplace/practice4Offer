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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == nullptr)
            return false;
        if(root->left == nullptr && root->right == nullptr){
            if(sum == root->val)
                return true;
            else
                return false;
        }
        bool con1 = false,con2 = false;
        if(root->left != nullptr)
             con1 = hasPathSum(root->left,sum-root->val);
        if(root->right != nullptr)
             con2 = hasPathSum(root->right,sum-root->val);
        return con1||con2;
    }
};