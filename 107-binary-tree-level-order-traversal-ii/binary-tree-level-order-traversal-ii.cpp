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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        stack<vector<int>> st; 
        if(!root){
            return {};
        }
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> temp; 
            for(int i = 0 ; i<size; i++){
                auto c = q.front(); 
                q.pop();
                temp.push_back(c->val);         
                if(c->left)  q.push(c->left);
                if(c->right) q.push(c->right);
            }
            st.push(temp);
           // ans.push_back(temp);

        }
        
        int k=0; 
        while(!st.empty()){
            ans.push_back(st.top()); st.pop(); 
        }

        return ans; 
    }
};