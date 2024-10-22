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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode* > q; 
        vector<long long> levelSums; 
        q.push(root);
        while(q.size()){
            int size = q.size();
            long long currsum = 0;
            for(int i=0; i<size; i++){
                auto n = q.front(); q.pop(); 
                currsum += n->val;
                if(n->left)  q.push(n->left);
                if(n->right) q.push(n->right);
            }
            levelSums.push_back(currsum);
        }
        if(levelSums.size() < k) return -1;
        sort(levelSums.rbegin(), levelSums.rend());  
        
        return levelSums[k - 1];
    }
};