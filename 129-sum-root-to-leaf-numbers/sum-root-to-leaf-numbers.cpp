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
    void sum (TreeNode* root, int curr, int &ans){
         if(root->left==nullptr && root->right==nullptr){
           curr = (10*curr )+ ( root->val);
           ans = ans + curr; 
           return;
        }
        if(root->left) sum(root->left,   (10*curr) + root->val  , ans );
        if(root->right) sum(root->right, (10*curr) + root->val  , ans );
    }
    int sumNumbers(TreeNode* root) {
       int ans = 0 ; 
       sum(root, 0, ans); 
       return ans;
    }
};