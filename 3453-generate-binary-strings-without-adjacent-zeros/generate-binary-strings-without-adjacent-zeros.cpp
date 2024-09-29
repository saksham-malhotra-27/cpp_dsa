class Solution {
public:
    void generate(int n, int i, bool haveOne, string s, vector<string> & str){
        if(i==n){
            if(haveOne) str.push_back(s);
            return;
        }
        if( (i==0) || (s[i-1]=='1') ) {
            generate(n, i+1, haveOne, s+'0', str);
        }
        generate(n, i+1, true, s+'1', str);

    }

    vector<string> validStrings(int n) {
     vector<string> str;
     if(n==1) return {"0","1"};
     generate(n,0,false,"",str);
     return str;    
    }
};