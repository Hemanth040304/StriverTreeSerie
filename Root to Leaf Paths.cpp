// https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=root-to-leaf-paths

/*
Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void RootToLeaf(Node* root, vector<vector<int>> &path, vector<int> ds){
    if (!root) return; // Base case
    
    ds.emplace_back(root -> data); // adding value to the vector
    
    if (!root -> left and !root -> right) path.push_back(ds); // adding path to the answer vector
    else{
        RootToLeaf(root -> left, path, ds);   // left treversal
        RootToLeaf(root -> right, path, ds);  // right treversal
    }
    ds.pop_back(); // removing the previous path value
}

class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> path;
        vector<int> ds;
        
        RootToLeaf(root, path, ds);
        
        return path;
    }
};
