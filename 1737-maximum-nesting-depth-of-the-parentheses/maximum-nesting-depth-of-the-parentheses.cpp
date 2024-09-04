class Solution {
public:
    int maxDepth(string s) {
        int depth=0; 
        int mx = 0;
        for(auto i: s){
                if(i=='(') depth++;
                else if (i!=')') continue;
                else depth--;
                mx = max(mx, depth);
        }
        return mx;
    }
};