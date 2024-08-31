class Solution {
public:
    string removeOuterParentheses(string s) {
        int innerCnt=0; 
        int outerCnt=0;
        int i=0;
        string str = "";
        while(i<s.length()){
            if(s[i]=='('){
                if(outerCnt==0){
                    outerCnt++;
                } else {
                    innerCnt++;
                    str+="(";
                }
            } else {
                if(innerCnt>=1){
                    innerCnt--;
                    str+=")";
                } else {
                    outerCnt--;
                }
            }
            i++;
        }
        return str;
    }
};