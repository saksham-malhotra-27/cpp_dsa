#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        string s= ""; int i=0;
        for( i=num.length()-1; i>=0; i--){
            if((num[i]-'0') % 2 != 0){
                break;
            }
        }
        if(i<0) return s;
        return num.substr(0,i+1);
    }
};