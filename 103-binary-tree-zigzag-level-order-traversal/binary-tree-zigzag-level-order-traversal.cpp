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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
       if(root==nullptr) return ans;
       queue<TreeNode*> q; 
       int cnt = 1;
       q.push(root);
       while(q.size()){
        int size = q.size();
        vector<int> v;
        for(int i=0; i<size; i++){
            TreeNode* n = q.front();  
            q.pop();  
            v.push_back(n->val);
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
        }
        if( cnt % 2 == 0) 
            reverse(v.begin(), v.end()); 
        cnt++;
        ans.push_back(v);
       }
       return ans; 
    }
};