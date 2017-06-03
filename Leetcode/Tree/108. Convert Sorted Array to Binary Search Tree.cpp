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
    TreeNode* sortedArrayToBst_re(vector<int>&nums,int left,int right){
        if(left <= right){
            int mid = left + (right-left)/2;
            TreeNode* node = new TreeNode(nums[mid]);
            node->left = sortedArrayToBst_re(nums,left,mid-1);
            node->right = sortedArrayToBst_re(nums,mid+1,right);
            return node;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        return sortedArrayToBst_re(nums,0,nums.size()-1);
    }
};