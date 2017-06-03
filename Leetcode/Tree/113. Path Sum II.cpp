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
    
    void DFS(vector<vector<int>>&res,vector<int>curr,int sum,int tempsum,TreeNode* root){
        if(root == nullptr)
            return ;
        tempsum += root->val;
        curr.push_back(root->val);
        if(tempsum == sum){
            if(root->left == nullptr && root->right == nullptr){
                res.push_back(curr);
                return ;
            }
        }
        DFS(res,curr,sum,tempsum,root->left);
        DFS(res,curr,sum,tempsum,root->right);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>>res;
        if(root == nullptr)
            return res;
        vector<int>curr;
        DFS(res,curr,sum,0,root);
        return res;
    }
};