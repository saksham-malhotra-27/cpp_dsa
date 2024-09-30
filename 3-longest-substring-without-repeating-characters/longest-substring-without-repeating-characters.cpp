class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        if(s.length()<=1) return s.length();
        st.insert(s[0]);
        int i=0; int j=1; int maxL = 0;
        while(j<s.length()){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                maxL = max(maxL, j-i+1);
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }

        return maxL;
    }
};