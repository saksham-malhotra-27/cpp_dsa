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
    bool hasPath(TreeNode* root, int targetSum){
       
       if(root->left==nullptr && root->right==nullptr){
        if(targetSum - (root->val) ==0) return true;
        return false; 
       }

       bool b1 = root->left ? hasPath(root->left, targetSum-(root->val)) : false;
       bool b2 = root->right ? hasPath(root->right, targetSum-(root->val)) : false; 

       return b1 || b2 ; 
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root==nullptr) return false;
       return hasPath(root, targetSum);
    }
};

