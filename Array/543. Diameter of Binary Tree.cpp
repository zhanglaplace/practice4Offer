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

    int getMaxHeight(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        return max(getMaxHeight(root->left),getMaxHeight(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
        int res = max(getMaxHeight(root->left)+getMaxHeight(root->right),max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
        return res;
    }
};