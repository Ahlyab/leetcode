class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL && q==NULL)
            return true;
        if (p == NULL || q == NULL) 
            return false;
 
        if(p->val != q->val) {
            return false;
        }
        // First recur on left child
        bool b1 = isSameTree(p->left, q->left);
        // Now recur on right child
        bool b2 = isSameTree(p->right, q->right);
        
        return b1 & b2;
    }
};
