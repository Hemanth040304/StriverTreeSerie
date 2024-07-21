// Children Sum in a Binary Tree

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
        // Add your code here
        int sum = 0;
        if (!root or (!root -> left and !root -> right)) return 1;
        else {
            if (root -> left) sum += root -> left -> data;
            if (root -> right) sum += root -> right -> data;
            return ((root -> data == sum) and isSumProperty(root -> left) and isSumProperty(root -> right));
        }
    }
};
