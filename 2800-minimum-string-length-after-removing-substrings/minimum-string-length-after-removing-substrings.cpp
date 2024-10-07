class Solution {
public:

    int mnl(string s, int currIndex){
        if(currIndex>=s.length()){
            return s.length();
        }
        if(s.substr(currIndex, 2)=="AB" || s.substr(currIndex, 2)=="CD"){
            string s2 = s.substr(0, currIndex) + s.substr(currIndex + 2);
            return mnl(s2, 0);
        }
        else {
           return  mnl(s, currIndex+1);
        }
    }

    int minLength(string s) {
         return mnl(s, 0);
    }
};