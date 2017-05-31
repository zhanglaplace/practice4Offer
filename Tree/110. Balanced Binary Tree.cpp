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
        if(root == NULL)
            return 0;
        return std::max<int>(getDepth(root->left),getDepth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        int height_left = getDepth(root->left);
        int height_right = getDepth(root->right);
        if(abs(height_left - height_right) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
            
    }
};