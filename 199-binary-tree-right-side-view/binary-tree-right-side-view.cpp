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
    int max=0;
    vector<int> right(TreeNode* root, vector<int>& curr, int lvl){
        

        if(lvl>max){
            curr.push_back(root->val);
            max+=1;
        }
        if(root->right) right(root->right, curr, lvl+1);
        if(root->left ) right(root->left, curr, lvl+1);
        

        return curr; 
    }

    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> curr;
        right(root, curr, 1);
        return curr;
    }
};