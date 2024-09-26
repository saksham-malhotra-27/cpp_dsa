class Solution {
public:
    vector<string> ans; 

    void recursion (int n, int o, int c, string curr){
        if(o==n && c==n){
            ans.push_back(curr);
            return ;
        }

        if(o<n){
            recursion(n, o+1, c, curr+'(');
        }
        if(c<o){
            recursion(n, o, c+1, curr+')');
        }
    }

    vector<string> generateParenthesis(int n) {
        recursion(n,0,0,"");
        return ans;
    }
};