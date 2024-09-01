class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        if (s.length()==1 || t.length()==0){
            return true;
        }
        map<char,char> first;
        map<char,char> second;
        for(int i=0; i<s.length(); i++){
            if(first.find(s[i])!=first.end() ){
                if(first[s[i]]!=t[i]){
                    return false;
                }
            } else {
                if(second.find(t[i])!=second.end()){
                    return false;
                } else {
                    first[s[i]] = t[i];
                    second[t[i]] = s[i];
                }
            }
        }
        return true;
    }
};