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
    int diameter = 0; 

    int d (TreeNode* root, TreeNode* r){
        if(root==nullptr) return 0; 
        
        int leftHeight  = d(root->left, root);
        int rightHeight = d(root->right, root);
        diameter = max(diameter, leftHeight+rightHeight);
        return max(leftHeight, rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         d(root, root); return diameter;
    }
};