class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long long ans=0;
        char sign = '+';
        bool isSigned = false; bool isStarted = false;
        set<char> vals = {'1','2','3','4','5','6','7','8','9','0'}; 
        for(auto i: s){
            
            if(i==' ' && !isStarted){continue;}
            if(i=='+' && !isSigned){isSigned=true;}
            else if(i=='-' && !isSigned){
                sign='-';
            } else if(vals.find(i)!=vals.end()){
                auto v = i-'0';
                if(ans>=INT_MAX){
                    if(sign=='+'){
                        return INT_MAX;
                    } else {
                        return INT_MIN;
                    }
                }
                ans = 10*ans + v;
            } else {
                break;
            }
            isSigned=true;
            isStarted=true;
        }
        ans = sign=='+'?ans:0-ans;
          if (ans >= INT_MAX) {
            return INT_MAX;
        } else if (ans <= INT_MIN) {
            return INT_MIN;
        } else {
            return ans;
        }
    }
};