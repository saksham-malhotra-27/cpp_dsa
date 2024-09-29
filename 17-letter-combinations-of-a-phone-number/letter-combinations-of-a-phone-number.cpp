class Solution {
public:
    unordered_map<char, string> mp; 

    Solution() {
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
    }

    void digtoconv(string digits, int idx, vector<string>& ans, string str){
        if(idx == digits.length()){
            if(idx!=0 ) ans.push_back(str);
            return;
        }
        char dig = digits[idx];
        
        auto arr = mp[dig];
        
        for(int i=0; i<arr.length(); i++){
            digtoconv(digits, idx+1, ans, str + arr[i]);
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> s;
        digtoconv(digits, 0, s, "");
        return s;
        
    }
}; 