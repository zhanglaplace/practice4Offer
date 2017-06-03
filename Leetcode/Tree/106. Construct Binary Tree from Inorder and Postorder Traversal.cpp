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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size() || inorder.size() == 0)
            return NULL;
        int len = postorder.size();
        int root_val = postorder[len-1];
        int index = 0;
        TreeNode* root= new TreeNode(root_val);
        for(int i = 0 ; i < len;++i){
            if(inorder[i] == root_val){
                index = i;
                break;
            }
        }
        vector<int>inorder_left(inorder.begin(),inorder.begin()+index);
        vector<int>inorder_right(inorder.begin()+index+1,inorder.end());
        vector<int>postorder_left(postorder.begin(),postorder.begin()+index);
        vector<int>postorder_right(postorder.begin()+index,postorder.end()-1);
        root->left = buildTree(inorder_left,postorder_left);
        root->right = buildTree(inorder_right,postorder_right);
        return root;
    }
};