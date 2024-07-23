class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map <char,char> mp;
        map <char,char> mpp;
        for(int i=0; i<s.length(); i++){
            if((mp.find(s[i])==mp.end())){
                if(mpp.find(t[i])==mpp.end()){
                mp[s[i]] = t[i]; mpp[t[i]] = s[i];
                }
                else {
                    return false;
                }
            } else {
                auto it  = mp.find(s[i]); auto iit = mpp.find(t[i]);
                if(it->second!=iit->first && it->first!=iit->second){
                    return false;
                }
            }
        }
        return true;
    }
};