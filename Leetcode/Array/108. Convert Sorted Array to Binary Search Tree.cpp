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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        int mid = nums.size()/2;
        if(size == 0)
            return NULL;
        TreeNode* p = new TreeNode(nums[mid]);
        vector<int> left (nums.begin(),nums.begin()+mid);
        vector<int>right (nums.begin()+mid+1,nums.end());
		p->left = sortedArrayToBST(left);
        p->right = sortedArrayToBST(right);
        return p;
    }
};