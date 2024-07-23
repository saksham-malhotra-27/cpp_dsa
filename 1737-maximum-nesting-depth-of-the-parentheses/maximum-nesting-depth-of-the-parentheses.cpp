class Solution {
public:
    int maxDepth(string s) {
      int max=0;
      int currentDepth=0;
      for(auto i: s){
        if(i=='('){
            currentDepth++;
            if(currentDepth>max){max=currentDepth;}
        }
        else if (i==')'){
            currentDepth--;
        }
      }
      return max;
    }

};