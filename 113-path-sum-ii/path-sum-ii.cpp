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
    void paths(TreeNode* root, int targetSum, vector<vector<int>>& ans, vector<int> curr){
        if(root==nullptr ){
            return;
        }
        
        if(targetSum == root->val  && root->left==nullptr && root->right==nullptr){
            curr.push_back(root->val);
            ans.push_back(curr);
            return;
        }
        
        curr.push_back(root->val);
        paths(root->left , targetSum - (root->val), ans,  curr);
        paths(root->right, targetSum - (root->val), ans,  curr);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans;
       paths(root, targetSum,  ans, {});
       
       return ans;
    }
};