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
    TreeNode* flat(TreeNode* root){
        
        if(root->left==nullptr && root->right ==nullptr){
            return root;
        }

        TreeNode* n1 = nullptr; 
        TreeNode* n2 = nullptr;
        if(root->left)
        n1 = flat(root->left);
        if(root->right)
        n2 = flat(root->right); 
        
        root->left = nullptr;
        root->right = n1; 
        auto curr = root;
        while(curr->right){
          curr=curr->right;
        }
        curr->right = n2;

        return root; 
    }

    void flatten(TreeNode* root) {
      if (root == nullptr) return; 
      auto curr = root; 

      while(curr!=nullptr){
        if(!curr->left){
            curr = curr->right; 
        } else {
            auto pred = curr->left; 
            while(pred->right && pred->right != curr){
                pred = pred->right; 
            }
            if(!pred->right){
                pred->right = curr; 
                curr = curr->left;
            } else {
                pred->right = curr->right; 
                curr->right=curr->left;
                curr->left=nullptr; 
                curr = pred->right; 
            }
        }
      }
    }
};