/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == nullptr)
            return ;
        TreeLinkNode* p = root ;
        TreeLinkNode* first = nullptr;
        while(p){
            if(!first){
                first = p ->left;
            }
            if(p->left != nullptr){
                p->left->next = p->right;
            }
            if(p->right != nullptr && p ->next != nullptr){
                p->right->next = p->next->left;
                p = p->next;
            }
            else{
                p = first;
                first = nullptr;
            }
        }
    }
};