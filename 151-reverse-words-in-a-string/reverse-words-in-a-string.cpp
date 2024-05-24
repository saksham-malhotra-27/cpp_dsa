class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){continue;}
            string s2="";
            while(i<s.length() && s[i] != ' '){
                s2+=s[i]; i++;
            }
            v.push_back(s2);
        }
        int j= v.size()-1; s="";
        while(j>=0){
            s+= v[j];
            if(j>0)
            s+=" ";
            j--;
        }
        return s;
    }
};