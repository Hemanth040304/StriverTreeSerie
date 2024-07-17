// 145. Binary Tree Postorder Traversal
// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

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
    void postOrder(TreeNode* root, vector <int> &ord) {
        if(!root) return;

        // Traverse the left subtree
        postOrder (root -> left, ord);

        // Traverse the right subtree
        postOrder (root -> right, ord);
        
        ord.emplace_back (root -> val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ord;
        postOrder (root, ord);
        return ord;
    }
};
