class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0||num==1) return num;

        return num%2==0? (1 + numberOfSteps(num/2)) : (1+numberOfSteps(--num));
    }
};