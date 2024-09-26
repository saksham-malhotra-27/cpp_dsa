class Solution {
public:
    vector<string> letters(string s, int i, vector<string> str, string curr){
        if(i==s.length()){
            str.push_back(curr);
            return str;
        }
        vector<string> a, b;
        if(isdigit(s[i])){
            a = letters(s,i+1, str, curr+s[i]);
        }
        else {
            a = letters(s, i + 1, str, curr + (char)toupper(s[i]));
            b = letters(s, i + 1, str, curr + (char)tolower(s[i]));
        }

        // Merge both results
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }

    vector<string> letterCasePermutation(string s) {
        return letters(s, 0, {}, "");
    }
};