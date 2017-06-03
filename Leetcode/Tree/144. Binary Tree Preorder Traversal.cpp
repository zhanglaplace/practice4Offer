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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ret;
        if(root == nullptr)
            return ret;
        stack<TreeNode*>st;
        TreeNode* p = root;
        while(!st.empty() || p != nullptr){
            if(p != nullptr){
                ret.push_back(p->val);
                st.push(p);
                p = p->left;
            }
            else{
                p = st.top();
                st.pop();
                p = p->right;
            }
        }
        return ret;
    }
};