// Problem 404. Sum of Left Leaves

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isLeaf(TreeNode *node) {
        if (node == nullptr) {
            return false;
        }

        return false;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int summation = 0;
        
        if (root == nullptr) {
            return 0;
        }

        if (root != nullptr) {
            if ()
        }

        return summation;
    }
};