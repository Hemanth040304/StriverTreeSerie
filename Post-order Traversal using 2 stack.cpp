class Solution {
public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postorder;
    if (!root) return postorder;
    stack<TreeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
      root = st1.top();
      st1.pop();
      st12.push(root);
      if (root -> left) st1.push(rot -> left);
      if (root -> right) st1.push(root -> right);
    }

    while (!st2.empty()) {
      postorder.emplace_back(st2.top() -> val);
      st2.pop();
    }

    return postorder;
  }
};
