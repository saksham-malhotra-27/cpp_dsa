class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map <char,char> mp; // s to t 
        map <char,char> mpp; // t to s 

        for(int i=0; i<s.length(); i++){
            if((mp.find(s[i])==mp.end())){ // b is not present  
               // fab   ghg
                if(mpp.find(t[i])==mpp.end()){ // g is not present 
                   mp[s[i]] = t[i]; mpp[t[i]] = s[i];
                }
                else { // g is present 
                    return false;
                }

            } 
            //  it -> ['o','a'], iit-> ['r', 'h']
            else { // second o is present 
                auto it  = mp.find(s[i]); auto iit = mpp.find(t[i]);
                if(it->second!=iit->first && it->first!=iit->second){
                    // 'a'  != 
                    // map ['a'] = 'b', it.first 'a' it.second 'b'
                    return false;
                }
            }
        }
        return true;
    }
};