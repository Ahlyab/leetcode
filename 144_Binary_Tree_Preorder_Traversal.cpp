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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pushPreorder(root, res);
        return res;
    }

    void pushPreorder(TreeNode* node, vector<int>& res)
{
    if (node == NULL)
        return;
 
    // First print data of node
    res.push_back(node->val);
 
    // Then recur on left subtree
    pushPreorder(node->left, res);
 
    // Now recur on right subtree
    pushPreorder(node->right, res);
}
};
