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
    void path(TreeNode * root, vector<string> &ans, string s){
      
        if(root->left==nullptr && root->right==nullptr){
            s = s + to_string(root->val);
            ans.push_back(s);
            return;
        }
        if(root->left) {
            path(root->left, ans, s+ to_string(root->val)+"->");
        }
        if(root->right){
            path(root->right, ans, s+ to_string(root->val)+"->");
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans; 
        path(root, ans, "");
        return ans;
    }
};