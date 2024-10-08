struct v{
    int height;
    bool isValid;
};


class Solution {
public:
    v is(TreeNode* root){
        if(root==nullptr){
            return {0, true};
        }
         if(root->left==nullptr && root->right==nullptr){
            return {1, true};
        }
        v a,b ;
        a =  is(root->left);
        b = is(root->right);
        a.isValid =  (a.isValid && b.isValid) && (abs(a.height-b.height)<=1);
        a.height = max(a.height, b.height) + 1; 
        return a;
        
    }    
    bool isBalanced(TreeNode* root) {
       auto b = is(root);
       return b.isValid;
    }
};