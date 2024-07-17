// 144. Binary Tree Preorder Traversal
// https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> result;
        preorder(root, result);
        return result;
    }
private:
    void preorder(TreeNode* node, vector<int>& result) {
        if (!node) return;

        result.push_back(node->val);

        // Traverse the left subtree
        preorder(node->left, result);

        // Traverse the right subtree
        preorder(node->right, result);
    }
};
