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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        queue<pair<TreeNode*, long>> q;
        q.push({root, 0});
        int mwidth = 0;
        while(q.size()){
            int size = q.size(); 
            long start = q.front().second; 
            long end = 0; 
            for(int i=0; i<size; i++){
                TreeNode* n = q.front().first; 
                long val = q.front().second - start;
                // unsigned long long val = q.front().second;
                q.pop(); 
                if(n->left)  q.push({n->left,  2*val});
                if(n->right) q.push({n->right, 2*val + 1 });
                end = val; 
            }
            //mwidth = max(mwidth, (int)(end-start)+1);
            mwidth = max(mwidth, (int)end+1);
        }
        return mwidth; 
    }
};