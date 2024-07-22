class Solution {
public:
    string removeOuterParentheses(string s) {
        string n;
        int outer=0; 
        int inner=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' && outer==0){
                outer++; continue;
            } 
            else if (s[i]=='('){
                n.append("(");
                inner++;
            } 
            else {
                if(inner>0){
                    inner --; n.append(")");
                }
                else {
                    outer --;
                }
            }
        }
        return n;
    }
};