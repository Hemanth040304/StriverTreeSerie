// 102. Binary Tree Level Order Traversal
// https://leetcode.com/problems/binary-tree-level-order-traversal/description/

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
    void fun(TreeNode *root,vector<vector<int>>&v,int l){
        if(root==NULL)return;
        if(v.size()==l)v.push_back({root->val});
        else v[l].push_back(root->val);
        fun(root->left,v,l+1);
        fun(root->right,v,l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        fun(root,v,0);
        return v;
    }
};
