// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
private:
    bool isLeaf(Node* root){
        if (!root -> left and !root -> right) return true;
        return false;
    }

    void addLeftBoundary(Node *root, vector<int> &ans) {
        Node* cur = root -> left;
        while (cur) {
            if (!isLeaf(cur)) ans.emplace_back(cur -> data);
            if (cur -> left) cur = cur -> left;
            else cur = cur -> right;
        }
    }
    
    void addLeaves(Node *root, vector<int> &ans) {
        if (isLeaf(root)) {
            ans.emplace_back(root -> data);
            return;
        }
        if (root -> left) addLeaves(root -> left, ans);
        if (root -> right) addLeaves(root -> right, ans);
    }
    
    void addRightBoundary(Node *root, vector<int> &ans) {
        Node* cur = root -> right;
        vector<int> tmp;
        
        while (cur) {
            if (!isLeaf(cur)) tmp.emplace_back(cur -> data);
            if (cur -> right) cur = cur -> right;
            else cur = cur -> left;
        }
        
        for (int i = tmp.size() - 1; i >= 0; i--) ans.emplace_back(tmp[i]);
    }
    
    
    
public:
    vector <int> boundary(Node *root){
        //Your code here
        vector<int> ans;
        if (!root) return ans;
        if (!isLeaf(root)) ans.emplace_back(root -> data);
        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);
        
        return ans;
    }
};
