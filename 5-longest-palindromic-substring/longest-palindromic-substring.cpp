string expand_from_center (int i, int j, string s){
    int l = i;
    int r = j;
    /*
    while(l>=0 && r<s.length()){
        if(s[l]!=s[r]){
            return s.substr(l+1,r-l-1);
        }
        l--; r++;
    }*/
    // if we dont use this loop as if we used this as it is it will be having a problem that:
    // i) what if the full string is palindrome , 
    // ii) what if only ith char is there that is a palindrome, 
    // iii) so what will u return ? therefore, we will change the code a bit :
    while(l>=0 && r<s.length() && s[l]==s[r]){
        l--; r++;
    }
    return s.substr(l+1,r-(l+1));
}

class Solution {
public:
    string longestPalindrome(string s) {
         if (s.length() <= 1) {
            return s;
        }
        string mx = "";
        for(int i=0; i<s.length()-1; i++){
            auto v1= expand_from_center(i,i+1,s);
            auto v2 = expand_from_center(i,i,s);
            if(mx.length()<v1.length()){
                mx=v1;
            }
            if(mx.length()<v2.length()){
                mx = v2;
            }
        }
        return mx;

    }
};