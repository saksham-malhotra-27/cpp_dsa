class Solution {
public:
    void targetsum(vector<int> &nums, int i, int target, int curr, int &count){
        if(i==nums.size()){
            if(target==curr){
                count = (count)+1;
            }
            return; 
        }
        targetsum(nums, i+1, target, curr + (-1*nums[i]), count);
        targetsum(nums, i+1, target, curr + (1*nums[i]), count);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int c=0;
        targetsum(nums, 0, target, 0, c);
        return c;
    }
};