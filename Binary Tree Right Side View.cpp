// 199. Binary Tree Right Side View
// https://leetcode.com/problems/binary-tree-right-side-view/description/

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
    void rightView(TreeNode* root, int level, vector <int> &ans) {
        if (!root) return;

        if (level == ans.size()) ans.emplace_back(root -> val);
        // leftView is same as this swap the function calls
        rightView(root -> right, level + 1, ans);
        rightView(root -> left, level + 1, ans);
    }

public:
    vector<int> rightSideView(TreeNode* root) {
        vector <int> ans;
        if (!root) return ans;
        rightView(root, 0, ans);
        return ans;
    }
};
