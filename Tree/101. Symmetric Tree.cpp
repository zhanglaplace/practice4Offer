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
    bool help(TreeNode* left,TreeNode* right){
        if(left == nullptr && right == nullptr)
            return true;
        else if(left == nullptr || right == nullptr )
            return false;
        else{
            bool con1 = left->val == right->val;
            bool con2 = help(left->left,right->right);
            bool con3 = help(left->right,right->left);
            return con1 && con2 && con3;
        }
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return help(root->left,root->right);
    }
};