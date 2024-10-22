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
    void sumup(TreeNode* root, int lvl, vector<long long> & sum){
        if(sum.size()<=lvl){
            sum.push_back(root->val);
        } else {
            sum[lvl] += root->val; 
        }
        if(root->left) sumup(root->left, lvl+1, sum);
        if(root->right) sumup(root->right, lvl+1, sum);
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> sum;
        sumup(root, 0, sum);
        if(sum.size()<k) return -1; 
        sort( sum.rbegin(), sum.rend());
        
        return sum[k-1];
    }
};