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
<<<<<<< HEAD
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
=======
    
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
>>>>>>> 02decf4b89d1d86166266c38890ea38310a1ca2e
    }
};