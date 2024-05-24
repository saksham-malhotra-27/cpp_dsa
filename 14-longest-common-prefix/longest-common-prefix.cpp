class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i=0;  string cprefix = "";
        while(i<strs[0].length() && i< strs[strs.size()-1].length()){
            if(strs[0][i] == strs[strs.size()-1][i]){
                cprefix+= strs[0][i];
            }
            else {
                break;
            }
            i++;
        }
        return cprefix;
    }
};