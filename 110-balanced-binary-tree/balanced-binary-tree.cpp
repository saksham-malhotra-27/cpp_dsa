class Solution {
public:
    int is(TreeNode* root){
        if(root==nullptr){
            return 0;
        }

        int leftHeight = is(root->left);
        if(leftHeight == -1){
            return -1;
        }
        int rightHeight = is(root->right);
        if(rightHeight==-1){
            return -1;
        }

        if(abs(leftHeight-rightHeight)>1){
            return -1;
        }

        return max(leftHeight, rightHeight)+1;
        
            
    }
    bool isBalanced(TreeNode* root) {
       return is(root)!=-1;

    }
};