// 101. Symmetric Tree
// https://leetcode.com/problems/symmetric-tree/

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
private:
    bool same(TreeNode* left, TreeNode* right) {
        if (!left or !right) return left == right;
        if (left -> val != right -> val) return false;
        return same(left -> left, right -> right) and same(left -> right, right -> left);
    }

public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return same(root -> left, root -> right);
    }
};
