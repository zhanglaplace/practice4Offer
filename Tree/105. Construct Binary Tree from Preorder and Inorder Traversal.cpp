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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.size()!= preorder.size() || inorder.size() == 0)
            return nullptr;
        int root_val = preorder[0];
        TreeNode* root = new TreeNode(root_val);
        int index = 0;
        for(int i = 0; i < inorder.size();++i){
            if(inorder[i] == root_val){
                index = i;
                break;
            }
        }
        vector<int>preorder_left(preorder.begin()+1,preorder.begin()+1+index);
        vector<int>preorder_right(preorder.begin()+index+1,preorder.end());
        vector<int>inorder_left(inorder.begin(),inorder.begin()+index);
        vector<int>inorder_right(inorder.begin()+index+1,inorder.end());
        root->left = buildTree(preorder_left,inorder_left);
        root->right = buildTree(preorder_right,inorder_right);
        return root;
    }
};