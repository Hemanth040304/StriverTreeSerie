class Solution {
public:
  vector<int> inorderTraversal(TreeNode* root) {
    TreeNode* node = root;
    vector<int> inorder;
    stack<TreeNode*> st;
    while (true) {
      if (node) {
        st.push(node);
        node = node -> left;
      }
      else {
        if (st.empty() == true) break;
        node = st.top();
        st.pop();
        inorder.emplace_back(node -> val);
        node = node -> right;
      }
    }
    return inorder;
  }
};
