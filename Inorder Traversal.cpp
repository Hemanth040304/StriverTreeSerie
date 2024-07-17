// 94. Binary Tree Inorder Traversal
// 94. Binary Tree Inorder Traversal
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
    void inOrd(TreeNode *root, vector <int> &v){
        if (!root) return;

        // Traverse the left subtree
        inOrd (root -> left, v);

        v.emplace_back(root -> val);

        // Traverse the right subtree
        inOrd (root -> right, v);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inOrd(root,v);
        return v;
    }
};
