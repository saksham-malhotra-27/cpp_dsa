class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        
        for(auto i: t){
            if(j<s.length() && i == s[j]){
                j++;
            }    
        }

        return j==s.length();
    }
};