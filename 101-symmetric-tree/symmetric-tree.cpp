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
    bool isSymm(TreeNode* left, TreeNode* right){
        if(left==nullptr && right==nullptr) return true;
        if(left ==nullptr || right== nullptr) return false;
        if(left->val == right->val)
        return isSymm(left->left, right->right) && isSymm(left->right, right->left); 
        else 
        return false;
    }
    bool isSymmetric(TreeNode* root) {
     if(root->left == nullptr && root->right  == nullptr){
        return true;
    }
    if(root->left == nullptr || root->right  == nullptr){
        return false;
    }
    return isSymm(root->left, root->right);
    }
};