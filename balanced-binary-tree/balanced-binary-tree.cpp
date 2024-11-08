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
    int getHeight(TreeNode*& root) {
        if (!root)
            return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        int maxHeight = max(lh, rh);
        return maxHeight + 1;
    }
    bool isBalanced(TreeNode*& root) {
        if (root == NULL)
            return true;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        bool status = abs(lh - rh) <= 1;
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);
        return status && leftAns && rightAns;
    }
};
