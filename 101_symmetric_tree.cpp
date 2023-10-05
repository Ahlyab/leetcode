/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->left, root->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL && q==NULL)
            return true;
        if (p == NULL || q == NULL) 
            return false;
 
        if(p->val != q->val) {
            return false;
        }
        // First recur on left child
        bool b1 = isSameTree(p->left, q->right);
        // Now recur on right child
        bool b2 = isSameTree(p->right, q->left);
        
        return b1 & b2;
    }
};
